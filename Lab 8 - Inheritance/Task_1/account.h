#pragma once
#include <iostream>
#include <string>

using namespace std;

class Account
{
protected:
    string accountNo;
    string accountName;
    float balance;

public:
    string getAccNo();
    void setAccNo(string no);
    string getAccName();
    void setAccName(string name);
    float getBalance();
    void setBalance(float amount);
};