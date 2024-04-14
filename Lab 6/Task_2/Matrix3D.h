#ifndef MATRIX3D_H
#define MATRIX3D_H

#pragma once
#include <vector>
#include <iostream>

class Matrix3D
{
public:
    Matrix3D(int _x, int _y, int _z, std::vector<std::vector<std::vector<double>>> mat);
    ~Matrix3D();
    Matrix3D operator+(const Matrix3D);
    Matrix3D operator-(const Matrix3D);

private:
    std::vector<std::vector<std::vector<double>>> matrix;
    int x, y, z;
};

#endif