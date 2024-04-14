#ifndef WEIGHT_H
#define WEIGHT_H

#pragma once

class Weight
{
public:
    Weight();
    Weight(double kg);
    Weight(int p, double o);
    ~Weight();
    void showWeight();
    operator double();

private:
    const double kgToPound;
    int pound;
    double ounce;
};

#endif