#include "CurrencyEuro.h"
#include <iostream>

CurrencyEuro::CurrencyEuro() : euros(0), cents(0) {} 

CurrencyEuro::CurrencyEuro(double val) 
{
    euros = static_cast<int>(val);
    cents = (val - static_cast<double>(euros)) * 100;
}

CurrencyEuro::~CurrencyEuro() {}

void CurrencyEuro::display()
{
    std::cout << euros << " euro " << cents << " cents" << std::endl;
}