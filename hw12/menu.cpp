#include "header.h"

int menu()
{
  int choice;

  while (true) {
    /* get choice */
    cout << "Select an operation:" << endl
         << "1. Add matrices" << endl
         << "2. Subtract matrices" << endl
         << "3. Multiply matrices" << endl
         << "4. Exit" << endl;
    cin >> choice;

    /* return if valid */
    if (choice >= 1 && choice <= 4) {
      return choice;
    } else {
      cin.clear();
      cin.ignore(256, '\n');
      cout << "Invalid option." << endl;
    }
  };
}
