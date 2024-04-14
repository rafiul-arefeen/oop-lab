#include "RationalNumber.h"

RationalNumber::RationalNumber() {}

RationalNumber::RationalNumber(const int numerator, const int denominator)
{
    setNumerator(numerator);
    setDenominator(denominator);
}

RationalNumber::~RationalNumber() {}

int RationalNumber::getNumerator() const
{
    return num;
}

int RationalNumber::getDenominator() const
{
    return den;
}

void RationalNumber::setNumerator(const int x)
{
    num = x;
}

void RationalNumber::setDenominator(const int x)
{
    if (x == 0)
        std::cout << "Denominator can't be 0." << std::endl;
    else
        den = x;
}

double RationalNumber::getValue() const
{
    double x = (double)num / (double)den;
    return x;
}

void RationalNumber::invert()
{
    if (num == 0)
        std::cout << "Invalid operation. Cannot invert." << std::endl;
    else
        std::swap(num, den);
}

RationalNumber RationalNumber::operator+(const RationalNumber r)
{
    double z = (num / den) + (r.num / r.den);
    RationalNumber r1, r2;
    r1.num = abs(num);
    r1.den = abs(den);
    r2.num = abs(r.num);
    r2.den = abs(r.den);

    int newDen = std::lcm(r1.den, r2.den);
    int newNum = (r1.num * (newDen / r1.den)) + (r2.num * (newDen / r2.den));

    int gcd = std::gcd(newNum, newDen);
    newNum /= gcd;
    newDen /= gcd;

    if (z < 0)
        newNum = -newNum;

    return RationalNumber(newNum, newDen);
}

RationalNumber RationalNumber::operator-(const RationalNumber r)
{
    double z = (num / den) - (r.num / r.den);
    RationalNumber r1, r2;
    r1.num = abs(num);
    r1.den = abs(den);
    r2.num = abs(r.num);
    r2.den = abs(r.den);

    int newDen = std::lcm(r1.den, r2.den);
    int newNum = (r1.num * (newDen / r1.den)) - (r2.num * (newDen / r2.den));

    int gcd = std::gcd(newNum, newDen);
    newNum /= gcd;
    newDen /= gcd;

    if (z < 0)
        newNum = -newNum;

    return RationalNumber(newNum, newDen);
}

RationalNumber RationalNumber::operator*(const RationalNumber r)
{
    int newNum = num * r.num;
    int newDen = den * r.den;

    int gcd = std::gcd(newNum, newDen);
    newNum /= gcd;
    newDen /= gcd;

    return RationalNumber(newNum, newDen);
}

RationalNumber RationalNumber::operator/(const RationalNumber r)
{
    if (r.num == 0)
    {
        std::cout << "Cannot divide by zero." << std::endl;
        return RationalNumber(num, den);
    }
    else
    {
        int newNum = num * r.den;
        int newDen = den * r.num;

        int gcd = std::gcd(newNum, newDen);
        newNum /= gcd;
        newDen /= gcd;

        return RationalNumber(newNum, newDen);
    }
}