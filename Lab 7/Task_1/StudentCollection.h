#ifndef STUDENTCOLLECTION_H
#define STUDENTCOLLECTION_H
#include <string>
#include <iostream>

#pragma once

struct _info
{
    std::string name;
    double grade;
};

class StudentCollection
{
public:
    StudentCollection();
    ~StudentCollection();
    double operator[](std::string& str);
    void addStudent(std::string str, double gr);

private:
    _info info[10];
    int noStu;

    int search(std::string str);
};

#endif