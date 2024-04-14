#include <iostream>
#include <string>
#include <math.h>

class TwoDimensionalShape
{
protected:
    std::string type;
    int noOfSides;
    std::string colour;

public:
    TwoDimensionalShape() : noOfSides(0), type(""), colour("") {}
    TwoDimensionalShape(std::string t, int n, std::string c) : type(t), noOfSides(n), colour(c) {}
    virtual float getArea() { return 0; }
    virtual int getPerimeter() { return 0; }
    virtual void shapeDetails()
    {
        std::cout << "Number of sides: " << noOfSides << std::endl;
        std::cout << "Type: " << type << std::endl;
        std::cout << "Colour: " << colour << std::endl;
    }
    friend void sortShapePerimeter(TwoDimensionalShape **tds, int n);
};

class Triangle : public TwoDimensionalShape
{
private:
    int a;
    int b;
    int c;
    float getArea()
    {
        float s = (a + b + c) / 2;
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        return area;
    }

public:
    Triangle() : a(0), b(0), c(0) {}
    Triangle(std::string t, int n, std::string c, int _a, int _b, int _c) : TwoDimensionalShape(t, n, c), a(_a), b(_b), c(_c) {}
    int getPerimeter()
    {
        return a + b + c;
    }
    void shapeDetails()
    {
        TwoDimensionalShape::shapeDetails();
        std::cout << "Area: " << getArea() << std::endl;
        std::cout << "Perimeter: " << getPerimeter() << std::endl;
        std::cout << std::endl;
    }
};

class Rectangle : public TwoDimensionalShape
{
private:
    int a;
    int b;
    float getArea()
    {
        return a * b;
    }

public:
    Rectangle() : a(0), b(0) {}
    Rectangle(std::string t, int n, std::string c, int _a, int _b) : TwoDimensionalShape(t, n, c), a(_a), b(_b) {}
    int getPerimeter()
    {
        return (a + b);
    }
    void shapeDetails()
    {
        TwoDimensionalShape::shapeDetails();
        std::cout << "Area: " << getArea() << std::endl;
        std::cout << "Perimeter: " << getPerimeter() << std::endl;
        std::cout << std::endl;
    }
};

class Square : public TwoDimensionalShape
{
private:
    int a;
    float getArea()
    {
        return a * a;
    }

public:
    Square() : a(0) {}
    Square(std::string t, int n, std::string c, int _a) : TwoDimensionalShape(t, n, c), a(_a) {}
    int getPerimeter()
    {
        return 4 * a;
    }
    void shapeDetails()
    {
        TwoDimensionalShape::shapeDetails();
        std::cout << "Area: " << getArea() << std::endl;
        std::cout << "Perimeter: " << getPerimeter() << std::endl;
        std::cout << std::endl;
    }
};

class Hexagon : public TwoDimensionalShape
{
private:
    int a;
    float getArea()
    {
        float area = ((3 * sqrt(3)) / 2) * a * a;
        return area;
    }

public:
    Hexagon() : a(0) {}
    Hexagon(std::string t, int n, std::string c, int _a) : TwoDimensionalShape(t, n, c), a(_a) {}
    int getPerimeter()
    {
        return 6 * a;
    }
    void shapeDetails()
    {
        TwoDimensionalShape::shapeDetails();
        std::cout << "Area: " << getArea() << std::endl;
        std::cout << "Perimeter: " << getPerimeter() << std::endl;
        std::cout << std::endl;
    }
};

void sortShapePerimeter(TwoDimensionalShape **tds, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (tds[i]->getPerimeter() > tds[j]->getPerimeter())
                std::swap(tds[i], tds[j]);
        }
    }
}

int main()
{
    TwoDimensionalShape *tds[8];

    tds[0] = new Triangle("Triangle", 3, "Red", 3, 4, 5);
    tds[1] = new Triangle("Triangle", 3, "Blue", 5, 12, 13);
    tds[2] = new Rectangle("Rectangle", 4, "Green", 3, 4);
    tds[3] = new Rectangle("Rectangle", 4, "Yellow", 10, 5);
    tds[4] = new Square("Square", 4, "Purple", 5);
    tds[5] = new Square("Square", 4, "Orange", 9);
    tds[6] = new Hexagon("Hexagon", 6, "Black", 7);
    tds[7] = new Hexagon("Hexagon", 6, "White", 3);

    sortShapePerimeter(tds, 8);

    for (int i = 0; i < 8; i++)
    {
        tds[i]->shapeDetails();
    }

    for (int i = 0; i < 8; i++)
    {
        delete tds[i];
    }

    return 0;
}