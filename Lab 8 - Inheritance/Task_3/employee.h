#pragma once
#include <iostream>
#include <string>
#include "info.h"

using namespace std;

class Employee
{
protected:
    string name;
    string emp_id;
    float monthly_salary;
    bool onDuty;
    Address presentAddress;
    Address permanentAddress;
    ContactInformation personalContactInfo;
    ContactInformation emergencyContactInfo;
public:
    Employee() {}
    Employee(string _name, string id, float sal, bool onD);
    string getName();
    string getEmpID();
    float getMonSalary();
    bool getDutyStat();
};