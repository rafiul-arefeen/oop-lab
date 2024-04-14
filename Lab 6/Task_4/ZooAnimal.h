#ifndef ZOOANIMAL_H
#define ZOOANIMAL_H

#pragma once
#include <iostream>
#include <string>

class ZooAnimal
{
public:
    ZooAnimal(std::string name, int year, int cage, float weight, int h);
    ~ZooAnimal();
    bool operator<(const ZooAnimal) const;
    bool operator>(const ZooAnimal) const;
    bool operator<=(const ZooAnimal) const;
    bool operator>=(const ZooAnimal) const;
    bool operator==(const ZooAnimal) const;
    bool operator!=(const ZooAnimal) const;
    void operator+=(int x);
    void operator-=(int x);
    void displayInfo();

private:
    std::string nameOfAnimal;
    int birthYear;
    int cageNumber;
    float weightData;
    int height;
};

#endif