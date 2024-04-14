#include "types.h"

// CurrentAccount
const float CurrentAccount::serviceCharge = 100;
const string CurrentAccount::accountPrefix = "100";
int CurrentAccount::nextAccount = 1;

CurrentAccount::CurrentAccount(string name, float amount)
{
    setAccNo(accountPrefix + " - " + to_string(nextAccount));
    setAccName(name);
    setBalance(amount);
    nextAccountNo();
}
float CurrentAccount::getServiceCharge()
{
    return serviceCharge;
}
string CurrentAccount::getAccPre()
{
    return accountPrefix;
}

//SavingsAccount
const string SavingsAccount::accountPrefix = "200";
int SavingsAccount::nextAccount = 1;

SavingsAccount::SavingsAccount(string name, float amount)
{
    setAccNo(accountPrefix + " - " + to_string(nextAccount));
    setAccName(name);
    setBalance(amount);
    nextAccountNo();
}
float SavingsAccount::getInterestRate()
{
    return interestRate;
}
void SavingsAccount::setInterestRate(float rate)
{
    interestRate = rate;
}
float SavingsAccount::getDepAmount()
{
    return monthlyDepositAmount;
}
void SavingsAccount::setDepAmount(float amount)
{
    monthlyDepositAmount = amount;
}
string SavingsAccount::getAccPre()
{
    return accountPrefix;
}

//MonthlyDepositScheme
const string MonthlyDepositScheme::accountPrefix = "300";
int MonthlyDepositScheme::nextAccount = 1;

MonthlyDepositScheme::MonthlyDepositScheme() {}
MonthlyDepositScheme::MonthlyDepositScheme(string name, float amount)
{
    setAccNo(accountPrefix + " - " + to_string(nextAccount));
    setAccName(name);
    setBalance(amount);
    nextAccountNo();
}
float MonthlyDepositScheme::getInterestRate()
{
    return interestRate;
}
void MonthlyDepositScheme::setInterestRate(float rate)
{
    interestRate = rate;
}
float MonthlyDepositScheme::getDepAmount()
{
    return monthlyDepositAmount;
}
void MonthlyDepositScheme::setDepAmount(float amount)
{
    monthlyDepositAmount = amount;
}
string MonthlyDepositScheme::getAccPre()
{
    return accountPrefix;
}

//LoanAccount
const string LoanAccount::accountPrefix = "900";
int LoanAccount::nextAccount = 1;

LoanAccount::LoanAccount(string name, float amount)
{
    setAccNo(accountPrefix + " - " + to_string(nextAccount));
    setAccName(name);
    setBalance(amount);
    nextAccountNo();
}
float LoanAccount::getInterestRate()
{
    return interestRate;
}
void LoanAccount::setInterestRate(float rate)
{
    interestRate = rate;
}
float LoanAccount::getDepAmount()
{
    return monthlyDepositAmount;
}
void LoanAccount::setDepAmount(float amount)
{
    monthlyDepositAmount = amount;
}
string LoanAccount::getAccPre()
{
    return accountPrefix;
}