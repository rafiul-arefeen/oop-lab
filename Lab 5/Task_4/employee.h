#pragma once
#include <string>

class Date
{
public:
    int yy;
    std::string mm;
    int dd;
};

class Employee
{
public:
    void setName(std::string _n);
    std::string getName();
    void setDOB(int _d, std::string _m, int _y);
    Date getDOB();
    void setSalary(int _s);
    int getSalary();

    void setInfo(std::string n, int d, std::string m, int y, int s);
    void getInfo();

private:
    std::string name;
    Date dob;
    int salary;
    static Date current;
};