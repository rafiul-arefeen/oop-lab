#pragma once
#include "types.h"

//TwoYearMDS
class TwoYearMDS : public MonthlyDepositScheme
{
protected:
    float maximumInterest;
public:
    TwoYearMDS(string name, float bal, float dep, float maxInt);
    float getMaxInt();
    void setMaxInt(float amount);
};

//FiveYearMDS
class FiveYearMDS : public MonthlyDepositScheme
{
protected:
    float maximumInterest;
public:
    FiveYearMDS(string name, float bal, float dep, float maxInt);
    float getMaxInt();
    void setMaxInt(float amount);
};

//IntialDepositMDS
class InitialDepositMDS : public MonthlyDepositScheme
{
protected:
    float maximumInterest;
    float initialDeposit;
public:
    InitialDepositMDS(string name, float bal, float dep, float maxInt);
    float getMaxInt();
    void setMaxInt(float amount);
    float getInitDep();
    void setInitDep(float amount);
};