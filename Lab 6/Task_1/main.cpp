#include <iostream>
#include "Counter.h"

int main()
{
    Counter c1;
    std::cout << "C1 count: " << c1.getCount() << std::endl;
    c1++;
    std::cout << "C1 count: " << c1.getCount() << std::endl;

    Counter c2;
    Counter c3;
    c2++;
    ++c3;
    c3++;
    c2 += c3;
    std::cout << "C2 count: " << c2.getCount() << std::endl;
    std::cout << "C3 count: " << c3.getCount() << std::endl;

    c1 = c2 + c3;
    std::cout << "C1 count: " << c1.getCount() << std::endl;

    if (c1 > c2)
        std::cout << "C1 is greater than C2." << std::endl;
    else if (c1 == c2)
        std::cout << "C1 is equal to C2." << std::endl;
    else
        std::cout << "C1 is less than C2." << std::endl;

    return 0;
}