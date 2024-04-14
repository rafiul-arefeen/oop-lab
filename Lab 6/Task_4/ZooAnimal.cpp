#include "ZooAnimal.h"

ZooAnimal::ZooAnimal(std::string name, int year, int cage, float weight, int h) : nameOfAnimal(name), birthYear(year), cageNumber(cage), weightData(weight), height(h) {}

ZooAnimal::~ZooAnimal() {}

bool ZooAnimal::operator<(const ZooAnimal z) const
{
    return weightData < z.weightData;
}
bool ZooAnimal::operator>(const ZooAnimal z) const
{
    return weightData > z.weightData;
}
bool ZooAnimal::operator<=(const ZooAnimal z) const
{
    return weightData <= z.weightData;
}
bool ZooAnimal::operator>=(const ZooAnimal z) const
{
    return weightData >= z.weightData;
}
bool ZooAnimal::operator==(const ZooAnimal z) const
{
    return weightData == z.weightData;
}
bool ZooAnimal::operator!=(const ZooAnimal z) const
{
    return weightData != z.weightData;
}
void ZooAnimal::operator+=(int x)
{
    weightData += static_cast<double>(x);
}
void ZooAnimal::operator-=(int x)
{
    weightData -= static_cast<double>(x);
}
void ZooAnimal::displayInfo()
{
    std::cout << "-----------------------" << std::endl;
    std::cout << "Name: " << nameOfAnimal << std::endl;
    std::cout << "Birth year: " << birthYear << std::endl;
    std::cout << "Cage number: " << cageNumber << std::endl;
    std::cout << "Weight data: " << weightData << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "-----------------------" << std::endl;
}