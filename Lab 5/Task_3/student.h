#pragma once
#include <iostream>
#include <string>

struct date
{
    int year;
    int mon;
    int day;
};

class Student
{
public:
    Student();

    void setName(std::string n) { name = n; }
    std::string getName() { return name; }
    void setDOB(int yy, int mm, int dd)
    {
        dob.year = yy;
        dob.mon = mm;
        dob.day = dd;
    }
    date getDOB() const { return dob; }
    void setID(int ID) { id = ID; }
    int getID() { return id; }
    void setCGPA(double cg) { cgpa = cg; }
    double getCGPA() { return cgpa; }
    static void setCurrentDate(int y, int m, int d)
    {
        current.year = y;
        current.mon = m;
        current.day = d;
    }
    date getCurrentDate() const { return current; }

    void setInfo(std::string w, int yy, int mm, int dd, int y, double z);
    void getInfo();
    void getAge() const;

private:
    std::string name;
    date dob;
    static date current;
    int id;
    double cgpa;
};