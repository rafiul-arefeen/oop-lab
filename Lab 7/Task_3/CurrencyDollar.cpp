#include "CurrencyDollar.h"
#include <iostream>

CurrencyDollar::CurrencyDollar() : dollars(0), cents(0) {}

CurrencyDollar::CurrencyDollar(double val) 
{
    dollars = static_cast<int>(val);
    cents = (val - static_cast<double>(dollars)) * 100;
}

CurrencyDollar::~CurrencyDollar() {}

void CurrencyDollar::display()
{
    std::cout << dollars << " dollar " << cents << " cents" << std::endl;
}