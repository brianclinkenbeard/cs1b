#include "header.h"


double bankAccount::getInterest()
{
  return 0.00;
}

double noServiceChargeChecking::getInterest()
{
  return 0.001;
}

double highInterestChecking::getInterest()
{
  return 0.005;
}

double savingsAccount::getInterest()
{
  return 0.005;
}

double highInterestSavings::getInterest()
{
  return 0.01;
}

double certificateOfDeposit::getInterest()
{
  return 0.015;
}
