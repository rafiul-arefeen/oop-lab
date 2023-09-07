#include <iostream>
#include "student.h"

int main()
{
    Student s1, s2;
    s1.setInfo("Ruhan", 2002, 4, 18, 116, 3.95);
    s2.setInfo("Tahsin", 2001, 10, 31, 106, 3.90);
    Student::setCurrentDate(2023, 9, 7);
    s1.getInfo();
    s1.getAge();
    s2.getInfo();
    s2.getAge();

    return 0;
}