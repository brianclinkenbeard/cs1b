#include "header.h"

void bankAccount::incrementMonth()
{
  months++;
}

void serviceChargeChecking::incrementMonth() {
  bankAccount::incrementMonth();
  withdraw(5);
  checksUsed = 0;
}

void noServiceChargeChecking::incrementMonth() {
  bankAccount::incrementMonth();
  deposit(getBalance() * getInterest());
}

void savingsAccount::incrementMonth()
{
  bankAccount::incrementMonth();
  deposit(getBalance() * getInterest());
}

void certificateOfDeposit::incrementMonth()
{
  bankAccount::incrementMonth();
  deposit(getBalance() * getInterest());
}
