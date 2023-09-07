#include <iostream>
#include "employee.h"

int main()
{
    Employee e1, e2;

    e1.setInfo("Ahmed Shafin Ruhan", 18, "April", 2002, 75000);
    e2.setInfo("Nusaiba Yasin", 31, "October", 2001, 95000);

    e1.getInfo();
    e2.getInfo();

    return 0;
}