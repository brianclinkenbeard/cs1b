#include "header.h"

void bankAccount::monthlyStatement()
{
  cout << "ACCOUNT STATEMENT" << endl;
  cout << "Name: " << getName() << endl;
  cout << "Account #" << getAccount() << endl;
  cout << "Balance: " << getBalance() << "$" << endl;
  cout << "Account has been open for " << getMonths() << " months" << endl;
}
