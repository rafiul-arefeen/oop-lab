#include <iostream>
#include "RationalNumber.h"

int main()
{
    RationalNumber r1(2, 5);
    std::cout << "R1 value: " << r1.getValue() << std::endl;

    RationalNumber r2(3, 4);
    std::cout << "R2 value: "  << r2.getValue() << std::endl;

    RationalNumber r3;
    r3 = r1 + r2;
    std::cout << "R1 + R2 value: " << r3.getValue() << std::endl;

    r3 = r1 - r2;
    std::cout << "R1 - R2 value: " << r3.getValue() << std::endl;

    r3 = r1 * r2;
    std::cout << "R1 * R2 value: " << r3.getValue() << std::endl;

    r3 = r1 / r2;
    std::cout << "R1 / R2 value: " << r3.getValue() << std::endl;

    return 0;
}