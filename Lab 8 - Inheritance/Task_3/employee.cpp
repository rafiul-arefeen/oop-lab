#include "employee.h"

Employee::Employee(string _name, string id, float sal, bool onD)
{
    name = _name;
    emp_id = id;
    onDuty = onD;
    monthly_salary = sal;
}

string Employee::getName()
{
    return name;
}
string Employee::getEmpID()
{
    return emp_id;
}
float Employee::getMonSalary()
{
    return monthly_salary;
}
bool Employee::getDutyStat()
{
    return onDuty;
}