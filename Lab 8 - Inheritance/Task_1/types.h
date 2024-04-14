#pragma once
#include "account.h"

// CurrentAccount
class CurrentAccount : public Account
{
protected:
    const static float serviceCharge;
    const static string accountPrefix;
    static int nextAccount;
    void nextAccountNo()
    {
        nextAccount++;
    }

public:
    CurrentAccount(string name, float amount);
    float getServiceCharge();
    string getAccPre();
};

// SavingsAccount
class SavingsAccount : public Account
{
protected:
    float interestRate;
    float monthlyDepositAmount;
    const static string accountPrefix;
    static int nextAccount;
    void nextAccountNo()
    {
        nextAccount++;
    }

public:
    SavingsAccount(string name, float amount);
    float getInterestRate();
    void setInterestRate(float rate);
    float getDepAmount();
    void setDepAmount(float amount);
    string getAccPre();
};

// MonthlyDepositScheme
class MonthlyDepositScheme : public Account
{
protected:
    float interestRate;
    float monthlyDepositAmount;
    const static string accountPrefix;
    static int nextAccount;
    void nextAccountNo()
    {
        nextAccount++;
    }

public:
    MonthlyDepositScheme();
    MonthlyDepositScheme(string name, float amount);
    float getInterestRate();
    void setInterestRate(float rate);
    float getDepAmount();
    void setDepAmount(float amount);
    string getAccPre();
};

// LoanAccount
class LoanAccount : public Account
{
protected:
    float interestRate;
    float monthlyDepositAmount;
    const static string accountPrefix;
    static int nextAccount;
    void nextAccountNo()
    {
        nextAccount++;
    }

public:
    LoanAccount(string name, float amount);
    float getInterestRate();
    void setInterestRate(float rate);
    float getDepAmount();
    void setDepAmount(float amount);
    string getAccPre();
};