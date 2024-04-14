#include <iostream>
#include "ZooAnimal.h"

int main()
{
    ZooAnimal z1("Tiger", 2005, 1, 85.0, 6);
    ZooAnimal z2("Lion", 2010, 2, 80.0, 5);
    ZooAnimal z3("Giraffe", 2015, 3, 70.0, 12);
    z1.displayInfo();
    z2.displayInfo();
    z3.displayInfo();

    z1 += 10;
    z1.displayInfo();
    z1 -= 5;
    z1.displayInfo();

    if(z1 > z2)
        std::cout << "Z1 is heavier than Z2" << std::endl;
    else
        std::cout << "Z2 is heavier than Z1" << std::endl;
    
    return 0;
}