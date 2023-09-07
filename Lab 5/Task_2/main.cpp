#include <iostream>
#include "student.h"

int main()
{
    Student s1, s2;
    s1.setInfo("Ruhan", "18/04/2002", 116, 3.95);
    s2.setInfo("Tahsin", "31/10/2001", 106, 3.90);

    s1.getInfo();
    s2.getInfo();

    return 0;
}