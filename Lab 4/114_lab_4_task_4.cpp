#include <iostream>
#include <string>

class ZooAnimal
{
private:
    std::string nameOfAnimal;
    int birthYear;
    int cageNumber;
    float weight;
    int height;

public:
    ZooAnimal() : nameOfAnimal(""), birthYear(2023), cageNumber(0), weight(1), height(1)
    {
    }
    ZooAnimal(std::string name, int year, int num, float w, int h) : nameOfAnimal(name), birthYear(year), cageNumber(num), weight(w), height(h)
    {
    }
    ~ZooAnimal()
    {
        displayInfo();
    }
    void setName(std::string name)
    {
        nameOfAnimal = name;
    }
    std::string getName()
    {
        return nameOfAnimal;
    }

    void setBirthYear(int year)
    {
        if (birthYear <= 2023)
            birthYear = year;
        else
            std::cout << "Invalid year." << std::endl;
    }
    int getBirthYear()
    {
        return birthYear;
    }

    void setCageNumber(int num)
    {
        if (cageNumber >= 0)
            cageNumber = num;
        else
            std::cout << "Invalid cage number." << std::endl;
    }
    int getCageNumber()
    {
        return cageNumber;
    }

    void setWeight(float w)
    {
        if (w > 0)
            weight = w;
        else
            std::cout << "Invalid weight." << std::endl;
    }
    float getWeight()
    {
        return weight;
    }

    void setHeight(int h)
    {
        if (h > 0)
            height = h;
        else
            std::cout << "Invalid height." << std::endl;
    }
    int getHeight()
    {
        return height;
    }

    int getAge()
    {
        int currentYear = 2023;
        return currentYear - birthYear;
    }
    void displayInfo()
    {
        std::cout << "Name of animal: " << nameOfAnimal << std::endl;
        std::cout << "Birth year: " << birthYear << std::endl;
        std::cout << "Cage number: " << cageNumber << std::endl;
        std::cout << "Weight: " << weight << " kg" << std::endl;
        std::cout << "Height: " << height << " m" << std::endl;
    }
};

int main()
{
    ZooAnimal animal("Giraffe", 2012, 5, 150.6, 7);
    animal.displayInfo();
    animal.setName("Tiger");
    std::cout << animal.getName() << std::endl;
    animal.setBirthYear(2016);
    std::cout << animal.getBirthYear() << std::endl;
    animal.setCageNumber(2);
    std::cout << animal.getCageNumber() << std::endl;
    animal.setWeight(70);
    std::cout << animal.getWeight() << std::endl;
    animal.setHeight(1);
    std::cout << animal.getHeight() << std::endl;
    std::cout << animal.getAge() << std::endl;

    return 0;
}