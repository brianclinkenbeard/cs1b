#include "header.h"

int main ()
{
  /* open list */
  ifstream carfile;
  carfile.open("infile.txt");

  /* track number of cars to navigate list */
  int cars = 0;

  /* create list */
  carNav *currentnav = new carNav;
  currentnav->data = new carType;
  currentnav->prev = NULL;
  currentnav->next = NULL;

  /* check if file exists */
  string filetest;
  if (carfile.is_open() && carfile >> filetest) {
    /* close and reopen carfile to start at the beginning */
    carfile.close();
    carfile.open("infile.txt");

    while (!carfile.eof()) {
      if (cars != 0) {
        /* create next element */
        currentnav->next = new carNav;
        currentnav->next->data = new carType;
        currentnav->next->prev = currentnav;
        currentnav->next->next = NULL;

        currentnav = currentnav->next;
      }
      /* populate list */
      getline(carfile, currentnav->data->brand);
      getline(carfile, currentnav->data->model);
      getline(carfile, currentnav->data->year);
      getline(carfile, currentnav->data->color);
      carfile.ignore(); /* skip a line */

      cars++;
    };
  }

  /* start at the beginning of the list */
  int carnum = cars;
  while (carnum > 1) {
    currentnav = currentnav->prev;
    carnum--;
  };

  /* print cars */
  while (carnum <= cars && cars != 0) {
    /* example: 1968 Ford Mustang in Blue */
    cout << carnum << ". "
         << currentnav->data->year << " "
         << currentnav->data->brand << " "
         << currentnav->data->model << " in "
         << currentnav->data->color << endl;

    if (carnum < cars) {
      currentnav = currentnav->next;
      carnum++;
    } else {
      break;
    }
  };

  /* free memory */
  while (cars > 0) {
    carNav *deletenav = currentnav;
    currentnav = currentnav->prev;

    delete deletenav->data;
    delete deletenav;

    cars--;
  };
  
  return 0;
}
