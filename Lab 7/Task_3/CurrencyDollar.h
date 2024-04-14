#ifndef CURRENCYDOLLAR_H
#define CURRENCYDOLLAR_H

#pragma once

class CurrencyDollar
{
public:
    CurrencyDollar();
    CurrencyDollar(double val);
    ~CurrencyDollar();
    void display();

private:
    int dollars;
    int cents;
};

#endif