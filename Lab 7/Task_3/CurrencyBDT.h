#ifndef CURRENCYBDT_H
#define CURRENCYBDT_H

#pragma once
#include "CurrencyDollar.h"
#include "CurrencyEuro.h"

class CurrencyBDT
{
public:
    CurrencyBDT();
    CurrencyBDT(double val);
    ~CurrencyBDT();
    operator CurrencyDollar();
    operator CurrencyEuro();
    void display();

private:
    int taka;
    int poisha;
};

#endif