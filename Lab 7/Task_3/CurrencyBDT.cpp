#include "CurrencyBDT.h"
#include <iostream>

CurrencyBDT::CurrencyBDT() : taka(0), poisha(0) {}

CurrencyBDT::CurrencyBDT(double val)
{
    taka = static_cast<int>(val);
    poisha = (val - static_cast<double>(taka)) * 100;
}

CurrencyBDT::~CurrencyBDT() {}

CurrencyBDT::operator CurrencyDollar()
{
    double val = ((taka) + poisha/ 100.0) * 0.0091;
    return val;
}

CurrencyBDT::operator CurrencyEuro()
{
    double val = ((taka) + poisha/100) * 0.0085;
    return val;
}

void CurrencyBDT::display()
{
    std::cout << taka << " taka " << poisha << " poisha" << std::endl;
}