#include "header.h"

void serviceChargeChecking::writeCheck(double amount)
{
  if (checksUsed < MAXCHECKS) {
    withdraw(amount);
    checksUsed++;
  } else {
    cout << "You have issued the maximum monthly amount of checks" << endl;
  }
}

void noServiceChargeChecking::writeCheck(double amount)
{
  withdraw(amount);
}
