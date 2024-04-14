#include "account.h"

string Account::getAccNo()
{
    return accountNo;
}
void Account::setAccNo(string no)
{
    accountNo = no;
}
string Account::getAccName()
{
    return accountName;
}
void Account::setAccName(string name)
{
    accountName = name;
}
float Account::getBalance()
{
    return balance;
}
void Account::setBalance(float amount)
{
    balance = amount;
}