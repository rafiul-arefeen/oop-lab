#include <iostream>

class Counter
{
private:
    int count;
    int step_val;

public:
    void setIncrementStep(int val)
    {
        step_val = val;
    }
    int getCount()
    {
        return count;
    }
    void increment()
    {
        count += step_val;
    }
    void resetCount()
    {
        count = 0;
    }
};

int main()
{
    int func, n;
    Counter counter;
    counter.resetCount();

    std::cout << "[1] Set step value" << std::endl;
    std::cout << "[2] View count" << std::endl;
    std::cout << "[3] Increment count" << std::endl;
    std::cout << "[4] Reset count" << std::endl;
    std::cout << "[-1] Exit" << std::endl;
    
    while(1)
    {
        std::cout << std::endl << "Enter command: ";
        std::cin >> func;
        if(func == 1)
        {
            std::cout << "Set step value: ";
            std::cin >> n;
            counter.setIncrementStep(n);
        }

        else if(func == 2)
        {
            std::cout << "Current count is: " << counter.getCount() << std::endl;
        }

        else if(func == 3)
        {
            counter.increment();
            std::cout << "Incremented!" << std::endl;
        }

        else if(func == 4)
        {
            counter.resetCount();
            std::cout << "Count is reset!" << std::endl;
        }

        else if(func == -1)
            break;
    }
    return 0;
}