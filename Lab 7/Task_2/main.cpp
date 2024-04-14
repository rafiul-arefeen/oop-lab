#include <iostream>
#include "Weight.h"

int main()
{
    Weight w1(21.675);
    w1.showWeight();
    std::cout << "Weight in KG: " << static_cast<double> (w1) << " KG" << std::endl;

    Weight w2(47, 12.5622);
    std::cout << "Weight in KG: " << static_cast<double> (w2) << " KG" << std::endl;

    return 0;
}