#pragma once
#include <iostream>
#include <string>

using namespace std;

class Employee
{
protected:
    string name;
    string emp_id;
    float monthly_salary;
    bool onDuty;
public:
    Employee() {}
    Employee(string _name, string id, float sal, bool onD);
    string getName();
    string getEmpID();
    float getMonSalary();
    bool getDutyStat();
};