#include "header.h"

int menu()
{
  int choice;

  while (true) {
    /* get choice */
    cout << "Menu - Select" << endl
         << "1. Add a record" << endl
         << "2. Delete a record" << endl
         << "3. Display database contents" << endl
         << "4. Save and exit" << endl;
    cin >> choice;

    /* continue if invalid */
    if (choice >= 1 && choice <= 4) {
      return choice;
    } else {
      cin.clear();
      cin.ignore(256, '\n');
      cout << "Invalid option." << endl;
    }
  };
}
