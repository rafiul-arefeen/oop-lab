#include "Counter.h"

Counter::Counter() : count(0), incStep(1) {}

Counter::Counter(const int stepValue) : count(0)
{
    if (stepValue < 0)
        incStep = 1;
    else
        incStep = stepValue;
}

Counter::~Counter() {}

void Counter::setIncrementStep(const int stepValue)
{
    if (stepValue > 0)
        incStep = stepValue;
    else
        std::cout << "Negative value not allowed. Previous increment step value reatained." << std::endl;
}

int Counter::getCount() const
{
    return count;
}

void Counter::increment()
{
    count += incStep;
}

void Counter::resetCount()
{
    count = 0;
}

Counter Counter::operator+(const Counter &c2) const
{
    Counter c(count > c2.count ? count : c2.count);
    c.count = count + c2.count;
    return c;
}

Counter Counter::operator+=(const Counter &c2)
{
    Counter c(count > c2.count ? count : c2.count);
    c.count = count + c2.count;
    return c;
}

Counter Counter::operator++()
{
    return Counter(++count);
}

Counter Counter::operator++(int)
{
    return Counter(count++);
}

bool Counter::operator>(const Counter &c2)
{
    return count > c2.count;
}

bool Counter::operator<(const Counter &c2)
{
    return count < c2.count;
}

bool Counter::operator>=(const Counter &c2)
{
    return count >= c2.count;
}

bool Counter::operator<=(const Counter &c2)
{
    return count <= c2.count;
}

bool Counter::operator==(const Counter &c2)
{
    return count == c2.count;
}

bool Counter::operator!=(const Counter &c2)
{
    return count != c2.count;
}