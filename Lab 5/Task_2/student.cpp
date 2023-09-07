#include "student.h"
#include <iostream>

Student::Student(): id(0), cgpa(0.0) {
    name.clear();
    dob.clear();
}

void Student::setInfo(std::string w, std::string x, int y, double z)
{
    setName(w);
    setDOB(x);
    if(y > 0 && z >= 0 && z <= 4.00)
    {
        setID(y);
        setCGPA(z);
    }
    else
        std::cout << "Invalid info." << std::endl;
}

void Student::getInfo()
{
    std::cout << "Name: " << getName() <<std::endl;
    std::cout << "Date of Birth: " << getDOB() <<std::endl;
    std::cout << "ID: " << getID() <<std::endl;
    std::cout << "CGPA: " << getCGPA() <<std::endl;
}