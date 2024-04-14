#include "mds.h"

//TwoYearMDS
TwoYearMDS::TwoYearMDS(string name, float bal, float dep, float maxInt)
{
    setAccNo(accountPrefix + " - " + to_string(nextAccount));
    setAccName(name);
    setBalance(bal);
    nextAccountNo();
    setDepAmount(dep);
    setMaxInt(maxInt);
    setInterestRate(maxInt);
}
float TwoYearMDS::getMaxInt()
{
    return maximumInterest;
}
void TwoYearMDS::setMaxInt(float amount)
{
    maximumInterest = amount;
}

//FiveYearMDS
FiveYearMDS::FiveYearMDS(string name, float bal, float dep, float maxInt)
{
    setAccNo(accountPrefix + " - " + to_string(nextAccount));
    setAccName(name);
    setBalance(bal);
    nextAccountNo();
    setDepAmount(dep);
    setMaxInt(maxInt);
    setInterestRate(maxInt);
}
float FiveYearMDS::getMaxInt()
{
    return maximumInterest;
}
void FiveYearMDS::setMaxInt(float amount)
{
    maximumInterest = amount;
}

//InitialDepositMDS
InitialDepositMDS::InitialDepositMDS(string name, float bal, float dep, float maxInt)
{
    setAccNo(accountPrefix + " - " + to_string(nextAccount));
    setAccName(name);
    setBalance(bal);
    nextAccountNo();
    setDepAmount(dep);
    setMaxInt(maxInt);
    setInterestRate(maxInt);
}
float InitialDepositMDS::getMaxInt()
{
    return maximumInterest;
}
void InitialDepositMDS::setMaxInt(float amount)
{
    maximumInterest = amount;
}
float InitialDepositMDS::getInitDep()
{
    return initialDeposit;
}
void InitialDepositMDS::setInitDep(float amount)
{
    initialDeposit = amount;
}