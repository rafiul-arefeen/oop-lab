#ifndef RATIONALNUMBER_H
#define RATIONALNUMBER_H

#pragma once
#include <iostream>
#include <numeric>

class RationalNumber
{
public:
    RationalNumber();
    RationalNumber(const int numerator, const int denominator);
    ~RationalNumber();
    int getNumerator() const;
    int getDenominator() const;
    void setNumerator(const int x);
    void setDenominator(const int x);
    double getValue() const;
    void invert();
    RationalNumber operator+(const RationalNumber);
    RationalNumber operator-(const RationalNumber);
    RationalNumber operator*(const RationalNumber);
    RationalNumber operator/(const RationalNumber);

private:
    int num;
    int den;
};

#endif