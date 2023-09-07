#include <iostream>
#include "SavingsAccount.h"

int main()
{
    SavingsAccount saver1(2000), saver2(3000);
    SavingsAccount::modifyInterestRate(3);

    std::cout << saver1.calculateMonthlyInterest() << std::endl;
    std::cout << saver2.calculateMonthlyInterest() << std::endl;

    SavingsAccount::modifyInterestRate(4);

    std::cout << saver1.calculateMonthlyInterest() << std::endl;
    std::cout << saver2.calculateMonthlyInterest() << std::endl;

    return 0;
}