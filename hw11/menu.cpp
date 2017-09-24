#include "header.h"
#include <iostream>

int menu()
{
  int choice;

  while (true) {
    /* get choice */
    cout << "Choose the type of account you would like to open: " << endl
         << "Checking:" << endl
           << "\t1. Service Charge Checking - no minimum balance, limited check use" << endl
           << "\t2. No Service Charge Checking - 25$ minimum balance, unlimited check use, 0.1% interest" << endl
           << "\t3. High Interest Checking - 100$ minimum balance, unlimited check use, 0.5% interest" << endl
         << "Savings:" << endl
           << "\t4. Savings Account - no minimum balance, 0.5% interest" << endl
           << "\t5. High Interest Savings Account - 50$ minimum balance, 1.0% interest" << endl
         << "Certificates of Deposit:" << endl
           << "\t6. Certificate of Deposit - 1.5% interest" << endl;
    cin >> choice;

    /* return if valid */
    if (choice >= 1 && choice <= 6) {
      return choice;
    } else {
      cin.clear();
      cin.ignore(256, '\n');
      cout << "Invalid option." << endl;
    }
  };
}
