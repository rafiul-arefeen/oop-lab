#include <iostream>

class Calculator
{
private:
    int num;

public:
    Calculator() : num(0)
    {
    }
    Calculator(int val) : num(val)
    {
    }
    ~Calculator()
    {
        std::cout << "Calculator object is destroyed." << std::endl;
    }
    int getValue()
    {
        return num;
    }
    void setValue(int val)
    {
        num = val;
    }
    void display()
    {
        std::cout << "Calculator display: " << num << std::endl;
    }
    void add(int val)
    {
        num += val;
        display();
    }
    void subtract(int val)
    {
        num -= val;
        display();
    }
    void multiply(int val)
    {
        num *= val;
        display();
    }
    void divideBy(int val)
    {
        if (val == 0)
            std::cout << "Error: Divide by 0 is undefined." << std::endl;
        else
            num /= val;

        display();
    }
    void clear()
    {
        num = 0;
        display();
    }
};

int main()
{
    Calculator calc;
    calc.add(10);
    calc.add(7);
    calc.multiply(31);
    calc.subtract(42);
    calc.divideBy(7);
    calc.divideBy(0);
    calc.add(3);
    calc.subtract(1);
    calc.clear();

    return 0;
}