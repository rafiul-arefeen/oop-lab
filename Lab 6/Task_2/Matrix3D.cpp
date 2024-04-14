#include "Matrix3D.h"

Matrix3D::Matrix3D(int _x, int _y, int _z, std::vector<std::vector<std::vector<double>>> mat) : x(_x), y(_y), z(_z), matrix(mat) {};

Matrix3D::~Matrix3D() {}

Matrix3D Matrix3D::operator+(const Matrix3D m2)
{
    if(x != m2.x || y != m2.y || z != m2.z)
    {
        std::cout << "Cannot add. Dimension error." << std::endl;
        return Matrix3D(x, y, z, matrix);
    }
    else
    {
        std::vector<std::vector<std::vector<double>>> res_matrix = matrix;

        for(int i = 0; i<x; i++)
        {
            for(int j = 0; j<y; j++)
            {
                for(int k = 0; k<z; k++)
                {
                    res_matrix[i][j][k] = matrix[i][j][k] + m2.matrix[i][j][k];
                }
            }
        }

        return Matrix3D(x, y, z, matrix);
    }
}

Matrix3D Matrix3D::operator-(const Matrix3D m2)
{
    if(x != m2.x || y != m2.y || z != m2.z)
    {
        std::cout << "Cannot add. Dimension error." << std::endl;
        return Matrix3D(x, y, z, matrix);
    }
    else
    {
        std::vector<std::vector<std::vector<double>>> res_matrix = matrix;

        for(int i = 0; i<x; i++)
        {
            for(int j = 0; j<y; j++)
            {
                for(int k = 0; k<z; k++)
                {
                    res_matrix[i][j][k] = matrix[i][j][k] - m2.matrix[i][j][k];
                }
            }
        }

        return Matrix3D(x, y, z, matrix);
    }
}