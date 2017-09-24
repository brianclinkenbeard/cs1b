#include "header.h"

void delRec(lst* list)
{
  cout << "Delete a record" << endl
    << "(a) Select record to delete using ticket number" << endl
    << "(b) Select record to delete using class title" << endl;
  char choice;
  cin >> choice;
  
  switch (choice) {
  case 'a':
  {
    string ticket;
    cout << "Enter the ticket number: ";
    cin.ignore();
    getline(cin, ticket);

    /* match ticket and delete */
    nav *currentnav = list->first;
    for (int i = 0; i < list->size; i++) {
      if (currentnav->data->ticket == ticket) {
        /* move other items */
        if (currentnav != list->first) {
          currentnav->prev->next = currentnav->next;
        } else {
          list->first = currentnav->next;
        }
        if (currentnav != list->last) {
          currentnav->next->prev = currentnav->prev;
        } else {
          list->last = currentnav->prev;
        }

        cout << "deleting data... ";
        delete currentnav->data;
        cout << "done" << endl << "deleting nav... ";
        delete currentnav;
        cout << "done" << endl;
        list->size--;
        break;
      } else if (currentnav == list->last) {
        cout << "No records matching that ticket number." << endl;
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

    /* match title and delete */
    nav *currentnav = list->first;
    for (int i = 0; i < list->size; i++) {
      if (currentnav->data->title == title) {
        /* move other items */
        if (currentnav != list->first) {
          currentnav->prev->next = currentnav->next;
        } else {
          list->first = currentnav->next;
        }
        if (currentnav != list->last) {
          currentnav->next->prev = currentnav->prev;
        } else {
          list->last = currentnav->prev;
        }

        delete currentnav->data;
        delete currentnav;
        list->size--;
        break;
      } else if (currentnav == list->last) {
        cout << "No records matching that title." << endl;
      }
      currentnav = currentnav->next;
    }
    break;
  }
  default:
    cin.clear();
    cin.ignore(256, '\n');
    cout << "Invalid choice." << endl;
  }
}
