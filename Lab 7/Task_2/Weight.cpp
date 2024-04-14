#include "Weight.h"
#include <iostream>

Weight::Weight() : kgToPound(2.20462) {}

Weight::Weight(double kg) : kgToPound(2.20462)
{
    double totalPound = kg * kgToPound;
    pound = static_cast<int>(totalPound);
    ounce = (totalPound - static_cast<int>(totalPound)) * 16.0;
}

Weight::Weight(int p, double o) : kgToPound(2.20462)
{
    pound = p;
    ounce = o;
}

Weight::~Weight() {}

void Weight::showWeight()
{
    std::cout << "Weight in pound-ounce: "<< pound << " lb " << ounce << " oz " << std::endl;
}

Weight::operator double()
{
    double kg = (pound / kgToPound) + (ounce / (kgToPound * 16.0));
    return kg;
}