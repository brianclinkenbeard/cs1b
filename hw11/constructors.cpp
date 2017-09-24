#include "header.h"

bankAccount::bankAccount(string myName, int myNumber)
{
  name = myName;
  number = myNumber;
  balance = 0.0;
  months = 0;
}

checkingAccount::checkingAccount(string myName, int myNumber) : bankAccount(myName, myNumber) {}

serviceChargeChecking::serviceChargeChecking(string myName, int myNumber) : checkingAccount(myName, myNumber)
{
  /* count checks */
  checksUsed = 0;
}

noServiceChargeChecking::noServiceChargeChecking(string myName, int myNumber) : checkingAccount(myName, myNumber) {}

highInterestChecking::highInterestChecking(string myName, int myNumber) : noServiceChargeChecking(myName, myNumber) {}

savingsAccount::savingsAccount(string myName, int myNumber) : bankAccount(myName, myNumber) {}

highInterestSavings::highInterestSavings(string myName, int myNumber) : savingsAccount(myName, myNumber) {}

certificateOfDeposit::certificateOfDeposit(string myName, int myNumber, int myMaturity) : bankAccount(myName, myNumber)
{
  /* set maturity */
  maturity = myMaturity;
}
