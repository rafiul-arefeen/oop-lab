#include "types.h"

Manager::Manager(string _name, string id, bool onD)
{
    name = _name;
    emp_id = id;
    onDuty = onD;
    monthly_salary = 10000;
}

Engineer::Engineer(string _name, string id, bool onD)
{
    name = _name;
    emp_id = id;
    onDuty = onD;
    monthly_salary = 8000;
}

Designer::Designer(string _name, string id, bool onD)
{
    name = _name;
    emp_id = id;
    onDuty = onD;
    monthly_salary = 7000;
}