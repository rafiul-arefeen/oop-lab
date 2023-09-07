#include "SavingsAccount.h"
#include <iostream>

int SavingsAccount::objectsCreated = 0;
int SavingsAccount::objectsDestroyed = 0;
double SavingsAccount::annualInterestRate = 0;

SavingsAccount::SavingsAccount(double val) : balance(val)
{
    objectsCreated++;
};
SavingsAccount::~SavingsAccount()
{
    objectsDestroyed++;
    std::cout << objectsCreated << " " << objectsDestroyed << std::endl;
};

double SavingsAccount::calculateMonthlyInterest()
{
    double _balance;
    double _interest;
    _balance = GetBalance();

    _interest = balance * (.01 * GetannualInterestRate()) / 12;
    _balance += _interest;

    SetBalance(_balance);
    return GetBalance();
}

void SavingsAccount::modifyInterestRate(int val)
{
    if (val <= 45 && val >= 0)
        SetannualInterestRate(val);
}
