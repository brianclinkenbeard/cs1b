#include "header.h"

void print(dat*);

void disRec(lst* list)
{
  cout << "Display options:" << endl
    << "(a) Select a record by ticket number." << endl
    << "(b) Select a record by class title." << endl
    << "(c) Display all records." << endl;
  char choice;
  cin >> choice;

  switch (choice) {
  case 'a':
  {
    string ticket;
    cout << "Enter the ticket number: ";
    cin.ignore();
    getline(cin, ticket);

    /* find and print record matching ticket */
    nav *currentnav = list->first;
    for (int i = 0; i < list->size; ++i) {
      if (currentnav->data->ticket == ticket) {
        print(currentnav->data);
        break;
      } else if (currentnav == list->last) {
        cout << "No records matching that ticket number." << endl;
        break;
      }
      currentnav = currentnav->next;
    }
    break;
  }
  case 'b':
  {
    string title;
    cout << "Enter the class title: ";
    cin.ignore();
    getline(cin, title);

    /* match title */
    nav *currentnav = list->first;
    for (int i = 0; i < list->size; i++) {
      if (currentnav->data->title == title) {
        print(currentnav->data);
      }
      currentnav = currentnav->next;
    }
    break;
  }
  case 'c':
  {
    /* print all */
    nav *currentnav = list->first;
    for (int i = 1; i <= list->size; i++) {
      cout << i << ". ";
      print(currentnav->data);
      currentnav = currentnav->next;
    }
    break;
  }
  default:
    cin.clear();
    cin.ignore(256, '\n');
    cout << "Invalid option." << endl;
  }
}

void print(dat* prdata)
{
  /* format data */
  cout << "Term: " << prdata->term
    << " | Class: " << prdata->title << ", " << prdata->desc
    << " | Lecture: " << prdata->loc << " at " << prdata->time << " with " << prdata->instrctr
    << " | Lab: " << prdata->labloc << " at " << prdata->labtime << " with " << prdata->labinstrctr
    << " | Prequisites: " << prdata->prereq
    << " | Grade: " << prdata->grade
    << " | Ticket #" << prdata->ticket
    << " | " << prdata->units << " units" << endl;
}
