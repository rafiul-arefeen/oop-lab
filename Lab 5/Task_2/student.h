#pragma once
#include <iostream>
#include <string>

class Student
{
public:
    Student();

    void setName(std::string n) { name = n; }
    std::string getName() { return name; }
    void setDOB(std::string d) { dob = d; }
    std::string getDOB() { return dob; }
    void setID(int ID) { id = ID; }
    int getID() { return id; }
    void setCGPA(double cg) { cgpa = cg; }
    double getCGPA() { return cgpa; }

    void setInfo(std::string w, std::string x, int y, double z);
    void getInfo();

private:
    std::string name;
    std::string dob;
    int id;
    double cgpa;
};