#pragma once

/*
 * Brian Clinkenbeard | CS1B | TTh 2:30 PM
 * Assignment 11
 */

#include <iostream>
#include <string>
using namespace std;

class bankAccount {
  public:
    bankAccount(string, int);
    /* account info */
    string getName();
    int getAccount();
    int getMonths();
    double getBalance();
    virtual double getMinimum();
    virtual double getInterest();
    void monthlyStatement();
    /* change values */
    void deposit(double);
    void withdraw(double);
    virtual void incrementMonth();
    /* destructor */
    virtual ~bankAccount();
  private:
    string name;
    int number;
    double balance;
    int months;
};

double initialDeposit(bankAccount, double);

class checkingAccount: public bankAccount {
  public:
    checkingAccount(string, int);
    /* ability to write checks */
    virtual void writeCheck(double) = 0;
    virtual ~checkingAccount();
  private:
    int checksUsed;
};

class serviceChargeChecking: public checkingAccount {
  public:
    serviceChargeChecking(string, int);
    /* track check use */
    void writeCheck(double);
    /* reset checks each month */
    void incrementMonth();
  private:
    int checksUsed;
    const int MAXCHECKS = 25;
};

class noServiceChargeChecking: public checkingAccount {
  public:
    noServiceChargeChecking(string, int);
    /* has minimum and pays interest */
    double getMinimum();
    double getInterest();
    /* check use */
    void writeCheck(double);
    /* we dont need to track checks */
    void incrementMonth();
    virtual ~noServiceChargeChecking();
};

class highInterestChecking: public noServiceChargeChecking {
  public:
    highInterestChecking(string, int);
    /* has minimum and pays interest */
    double getMinimum();
    double getInterest();
};

class savingsAccount: public bankAccount {
  public:
    savingsAccount(string, int);
    /* pays interest */
    double getInterest();
    void incrementMonth();
    virtual ~savingsAccount();

};

class highInterestSavings: public savingsAccount {
  public:
    highInterestSavings(string, int);
    /* has minimum and pays interest */
    double getMinimum();
    double getInterest();
};

class certificateOfDeposit: public bankAccount {
  public:
    certificateOfDeposit(string, int, int);
    void incrementMonth();
    /* pays interest */
    double getInterest();
  private:
    /* length of maturity in months */
    int maturity;
};
