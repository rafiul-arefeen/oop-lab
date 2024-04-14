#pragma once
#include "employee.h"

class Manager : public Employee
{
public:
    Manager(string _name, string id, bool onD);
};

class Engineer : public Employee
{
public:
    Engineer(string _name, string id, bool onD);
};

class Designer : public Employee
{
public:
    Designer(string _name, string id, bool onD);
};