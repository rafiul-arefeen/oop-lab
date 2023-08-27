#include <iostream>

class RationalNumber
{
private:
    int num;
    int den;
    
public:
    void assign(int numerator, int denominator)
    {
        if(denominator != 0)
        {
            num = numerator;
            den = denominator;
            std::cout << "Assigned!" << std::endl;
        }
        else
            std::cout << "Invalid input. Denominator can't be 0." << std::endl;
    }
    double convert()
    {
        float decimal;
        decimal = num / den;
        return decimal;
    }
    void invert()
    {
        int temp;
        if(num == 0)
        {
            std::cout << "Invalid mathematical expression upon inversion. Can't invert" << std::endl;
        }
        else
        {
            temp = den;
            den = num;
            num = temp;
            std::cout << "Inverted!" << std::endl;
        }
    }
    void print()
    {
        std::cout << "The value is: ";
        if(num < 0 && den < 0)
        {
            std::cout << abs(num) << "/" << abs(den) << std::endl;
        }
        else if(num < 0 || den < 0)
        {
            std::cout << "-"<< abs(num) << "/" << abs(den) << std::endl;
        }
        else
        {
            std::cout << abs(num) << "/" << abs(den) << std::endl;
        }
        std::cout << std::endl;
    }
};

int main()
{
    int func, num, den;
    RationalNumber number;

    std::cout << "[1] Assign Numerator and Denominator" << std::endl;
    std::cout << "[2] Convert to decimal" << std::endl;
    std::cout << "[3] Invert the expression" << std::endl;
    std::cout << "[4] Print the expression" << std::endl;
    std::cout << "[-1] Exit" << std::endl;

    while(1)
    {
        std::cout << std::endl << "Enter command: ";
        std::cin >> func;
        if(func == 1)
        {
            std::cout << "Enter numerator: ";
            std::cin >> num;
            std::cout << "Enter denominator: ";
            std::cin >> den;

            number.assign(num, den);
        }

        else if(func == 2)
        {
            std::cout << "Decimal value: " << number.convert() << std::endl;
        }

        else if(func == 3)
        {
            number.invert();
        }

        else if(func == 4)
        {
            number.print();
        }

        else if(func == -1)
            break;
    }
    return 0;
}