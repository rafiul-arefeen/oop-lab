#ifndef COUNTER_H
#define COUNTER_H

#pragma once
#include <iostream>

class Counter
{
public:
    Counter();
    Counter(const int stepValue);
    ~Counter();
    void setIncrementStep(const int stepValue);
    int getCount() const;
    void increment();
    void resetCount();
    Counter operator+(const Counter &) const;
    Counter operator+=(const Counter &);
    Counter operator++();
    Counter operator++(int);
    bool operator>(const Counter &);
    bool operator<(const Counter &);
    bool operator>=(const Counter &);
    bool operator<=(const Counter &);
    bool operator==(const Counter &);
    bool operator!=(const Counter &);

private:
    int count;
    int incStep;
};

#endif