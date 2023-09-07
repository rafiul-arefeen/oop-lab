#include <iostream>
#include "employee.h"

Date Employee::current = {2023, "September", 7};

void Employee::setName(std::string _n)
{
    if (_n.length() > 2)
        name = _n;
    else
        name = "John Doe";
}
std::string Employee::getName()
{
    return name;
}
void Employee::setDOB(int _d, std::string _m, int _y)
{
    if (current.yy - _y < 18)
        dob = {2002, "January", 1};
    else
        dob = {_y, _m, _d};
}
Date Employee::getDOB()
{
    return dob;
}
void Employee::setSalary(int _s)
{
    if (_s <= 100000 && _s >= 10000)
        salary = _s;
    else
        salary = 10000;
}
int Employee::getSalary()
{
    return salary;
}

void Employee::setInfo(std::string n, int d, std::string m, int y, int s)
{
    setName(n);
    setDOB(d, m, y);
    setSalary(s);
}
void Employee::getInfo()
{
    std::cout << "Name: " << getName() << std::endl;
    std::cout << "Date of Birth: " << getDOB().dd << " " << getDOB().mm << " " << getDOB().yy << std::endl;
    std::cout << "Salary: BDT " << getSalary() << std::endl;
}