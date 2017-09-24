#include "header.h"

int main()
{
  lst *listp = NULL;
  listp = new lst;
  listp->size = 0;

  ifstream inrecs;
  inrecs.open("sbclassdb.txt");

  /* check that file contains data and isn't empty */
  string filetest;
  if (inrecs.is_open() && inrecs >> filetest) {
    /* reopen to go back to the beginning of the file after test */
    inrecs.close();
    inrecs.open("sbclassdb.txt");

    /* initialize with file */
    nav *firstNav = new nav;
    firstNav->data = new dat;
    firstNav->prev = NULL;
    firstNav->next = NULL;
    listp->first = firstNav;
    listp->last = firstNav;

    nav *currentnav = listp->first;
    while (!inrecs.eof()) {
      if (listp->size != 0) {
        /* create new nav */
        currentnav->next = new nav;
        currentnav->next->data = new dat;
        currentnav->next->prev = currentnav;
        currentnav->next->next = NULL;
        currentnav = currentnav->next;
      }

      /* extract data */
      getline(inrecs, currentnav->data->term);
      getline(inrecs, currentnav->data->title);
      getline(inrecs, currentnav->data->desc);
      getline(inrecs, currentnav->data->loc);
      getline(inrecs, currentnav->data->time);
      getline(inrecs, currentnav->data->instrctr);
      getline(inrecs, currentnav->data->labloc);
      getline(inrecs, currentnav->data->labtime);
      getline(inrecs, currentnav->data->labinstrctr);
      getline(inrecs, currentnav->data->prereq);
      getline(inrecs, currentnav->data->grade);
      getline(inrecs, currentnav->data->ticket);
      getline(inrecs, currentnav->data->units);
      inrecs.ignore(); /* skip a line */

      listp->size++;
      listp->last = currentnav;
    };
  }
  inrecs.close();

  int choice;
  while (true) {
    /* get choice */
    choice = menu();
    cout << endl;

    switch (choice) {
    case 1:
      addRec(listp);
      cout << endl;
      break;
    case 2:
      delRec(listp);
      cout << endl;
      break;
    case 3:
      disRec(listp);
      cout << endl;
      break;
    case 4:
      /* save to db */
      ofstream outrecs;
      outrecs.open("sbclassdb.txt");
      nav *currentnav = listp->first;

      for (int i = 0; i < listp->size; i++) {
        outrecs << currentnav->data->term << endl;
        outrecs << currentnav->data->title << endl;
        outrecs << currentnav->data->desc << endl;
        outrecs << currentnav->data->ticket << endl;
        outrecs << currentnav->data->loc << endl;
        outrecs << currentnav->data->time << endl;
        outrecs << currentnav->data->instrctr << endl;
        outrecs << currentnav->data->labloc << endl;
        outrecs << currentnav->data->labtime << endl;
        outrecs << currentnav->data->labinstrctr << endl;
        outrecs << currentnav->data->units << endl;
        outrecs << currentnav->data->prereq << endl;
        outrecs << currentnav->data->grade << endl;

        if (i != listp->size - 1) {
          outrecs << endl;
        }

        currentnav = currentnav->next;
      }
      outrecs.close();

      /* free memory */
      currentnav = listp->last;
      for (int i = listp->size; i > 0; i--) {
        delete currentnav->data;
       
        nav *delnav = currentnav;
        currentnav = currentnav->prev;
        delete delnav;
      }
      delete listp;

      return 0;
    }
  };
}
