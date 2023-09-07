#include "student.h"
#include <iostream>

date Student::current;
Student::Student() : id(0), cgpa(0.0)
{
    name.clear();
}

void Student::setInfo(std::string w, int yy, int mm, int dd, int y, double z)
{
    setName(w);
    if (dd > 0 && dd < 32 && mm > 0 && mm < 13)
    {
        setDOB(yy, mm, dd);
    }
    else
        std::cout << "Invalid date." << std::endl;

    if (y > 0 && z >= 0 && z <= 4.00)
    {
        setID(y);
        setCGPA(z);
    }
    else
        std::cout << "Invalid info." << std::endl;
}

void Student::getInfo()
{
    std::cout << "Name: " << getName() << std::endl;
    std::cout << "Date of Birth: " << dob.year << "/" << dob.mon << "/" << dob.day << std::endl;
    std::cout << "ID: " << getID() << std::endl;
    std::cout << "CGPA: " << getCGPA() << std::endl;
}

void Student::getAge() const
{
    date birthdate = getDOB();
    date now = getCurrentDate();

    std::cout << "Age: " << now.year - birthdate.year << " years" << std::endl;
}