#include <iostream>
#include <string>

class AirTravel
{
private:
    int flightNumber;
    std::string destination;
    float distance;
    float maxFuelCapacity;
    
    float calFuel()
    {
        if(distance <= 1000)
            return 500;
        else if(distance > 1000 && distance <= 2000)
            return 1100;
        else
            return 2200;
    }

public:
    void feedInfo()
    {
        std::cout << "Flight number: ";
        std::cin >> flightNumber;
        std::cout << "Destination: ";
        std::cin >> destination;
        std::cout << "Distance: ";
        std::cin >> distance;
        std::cout << "Max fuel capacity: ";
        std::cin >> maxFuelCapacity;
    }

    void showInfo()
    {
        std::cout << std::endl << "----------------------------------------" << std::endl;
        std::cout << "Flight number: " << flightNumber << std::endl;
        std::cout << "Destination: " << destination << std::endl;
        std::cout << "Distance: " << distance << std::endl;
        std::cout << "Max fuel capacity: " << maxFuelCapacity << std::endl << std::endl;

        if(calFuel() <= maxFuelCapacity)
            std::cout << "Fuel capacity is fit for this flight distance." << std::endl;
        else
            std::cout << "Not sufficient fuel capacity for this flight." << std::endl;

        std::cout << "----------------------------------------" << std::endl;
    }
};

int main()
{
    AirTravel info;
    info.feedInfo();
    info.showInfo();

    return 0;
}