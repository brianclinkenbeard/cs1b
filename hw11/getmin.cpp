#include "header.h"

double bankAccount::getMinimum()
{
  return 0.00;
}

double noServiceChargeChecking::getMinimum()
{
  return 25.00;
}

double highInterestChecking::getMinimum()
{
  return 100.00;
}

double highInterestSavings::getMinimum()
{
  return 50.00;
}
