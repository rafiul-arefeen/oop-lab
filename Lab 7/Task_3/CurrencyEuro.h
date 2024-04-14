#ifndef CURRENCYEURO_H
#define CURRENCYEURO_H

#pragma once

class CurrencyEuro
{
public:
    CurrencyEuro();
    CurrencyEuro(double val);
    ~CurrencyEuro();
    void display();

private:
    int euros;
    int cents;
};

#endif