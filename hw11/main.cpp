#include "header.h"

int main()
{
  cout << "Brian Clinkenbeard | CS1B | TTh 2:30 PM | Assignment 11" << endl << endl;

  /* SCC */
  cout << "Service Charge Checking:" << endl;
  serviceChargeChecking scc("Bill", 12345);

  cout << "Testing check limit: ";
  for (int i = 0; i < 25; i++) {
    scc.deposit(1);
    scc.writeCheck(1);
    cout << "|";
  }
  scc.deposit(1);
  cout << endl;
  scc.writeCheck(1); /* exceeds limit */
  
  scc.deposit(4);
  cout << "Testing service charge..." << endl;
  scc.monthlyStatement();
  cout << endl << "Incrementing month:" << endl;
  scc.incrementMonth();
  scc.monthlyStatement();

  /* NSCC */
  cout << endl << "No Service Charge Checking:" << endl;
  noServiceChargeChecking nscc("Joe", 23456);

  cout << "Testing minimum balance..." << endl;
  nscc.deposit(initialDeposit(nscc, nscc.getMinimum()));
  cout << "Balance exceeds minimum." << endl;

  cout << "Testing interest..." << endl;
  nscc.monthlyStatement();
  cout << "Incrementing month:" << endl;
  nscc.incrementMonth();
  nscc.monthlyStatement();

  /* HIC */
  cout << endl << "High Interest Checking:" << endl;
  highInterestChecking hic("Jill", 54321);

  cout << "Testing minimum balance..." << endl;
  hic.deposit(initialDeposit(hic, hic.getMinimum()));
  cout << "Balance exceeds minimum." << endl;

  cout << "Testing interest..." << endl;
  hic.monthlyStatement();
  cout << "Incrementing month:" << endl;
  hic.incrementMonth();
  hic.monthlyStatement();

  /* SA */
  cout << endl << "Savings Account:" << endl;
  savingsAccount sa("Don", 34567);

  cout << "Testing interest...";
  sa.deposit(100);
  sa.monthlyStatement();
  cout << "Incrementing month:" << endl;
  sa.incrementMonth();
  sa.monthlyStatement();

  /* HIS */
  cout << endl << "High Interest Savings:" << endl;
  highInterestSavings his("Jared", 76543);

  cout << "Testing minimum balance..." << endl;
  his.deposit(initialDeposit(his, his.getMinimum()));
  cout << "Balance exceeds minimum." << endl;

  cout << "Testing interest..." << endl;
  his.monthlyStatement();
  cout << "Incrementing month:" << endl;
  his.incrementMonth();
  his.monthlyStatement();

  /* COD */
  cout << endl << "Certificate of Deposit:" << endl;
  certificateOfDeposit cod("Brian", 45678, 8);

  cout << "Testing interest..." << endl;
  cod.monthlyStatement();
  cout << "Incrementing month:" << endl;
  cod.incrementMonth();
  cod.monthlyStatement();

  return 0;
}



double initialDeposit(bankAccount acc, double min)
{
  /* get initial deposit */
  while (true) {
    double initbal;
    cout << "Enter the initial balance: ";
    cin >> initbal;

    if (initbal >= min) {
      return initbal;
    } else {
      /* loop until balance is greater than minimum */
      cin.clear();
      cin.ignore(256, '\n');
      cout << "Deposit does not exceed minimum balance." << endl;
    }
  };
}

