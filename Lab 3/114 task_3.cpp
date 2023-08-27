#include <iostream>
#include <string>

class BankAccount
{
private:
    std::string name;
    int acc_num;
    std::string acc_type;
    int bank_balance;

public:
    void customerDetails(std::string cus_name, int num)
    {
        name = cus_name;
        acc_num = num;
        std::cout << "Customer data entered!" << std::endl;
    }
    void accountType(std::string type)
    {
        acc_type = type;
        std::cout << "Account type initialized!" << std::endl;
    }
    void balance()
    {
        std::cout << "The balance is: " << bank_balance << std::endl;
    }
    void deposit(int amount)
    {
        bank_balance += amount;
        std::cout << "The new balance is: " << bank_balance << std::endl;
    }
    void withdraw(int amount)
    {
        if (amount <= bank_balance)
        {
            bank_balance -= amount;
            std::cout << "The new balance is: " << bank_balance << std::endl;
        }
        else
            std::cout << "Cannot withdraw. Not enough balance." << std::endl;
    }
    void display()
    {
        std::cout << std::endl << "------- Customer Info --------" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Account number: " << acc_num << std::endl;
        std::cout << "Account type: " << acc_type << std::endl;
        std::cout << "Current balance: " << bank_balance << std::endl;
    }
};

int main()
{
    int func, amount, num;
    std::string str;
    BankAccount account;

    std::cout << "[1] Enter customer name and account number" << std::endl;
    std::cout << "[2] Enter account type" << std::endl;
    std::cout << "[3] Show balance" << std::endl;
    std::cout << "[4] Deposit" << std::endl;
    std::cout << "[5] Withdraw" << std::endl;
    std::cout << "[6] View customer info" << std::endl;
    std::cout << "[-1] Exit" << std::endl;

    while(1)
    {
        std::cout << std::endl << "Enter command: ";
        std::cin >> func;
        if(func == 1)
        {
            std::cout << "Name: ";
            std::cin >> str;
            std::cout << "Account number: ";
            std::cin >> num;

            account.customerDetails(str, num);
        }

        else if(func == 2)
        {
            std::cout << "Account type (Current / Saving): ";
            std::cin >> str;
            account.accountType(str);
        }

        else if(func == 3)
        {
            account.balance();
        }

        else if(func == 4)
        {
            std::cout << "Enter amount to deposit: ";
            std::cin >> num;
            account.deposit(num);
        }

        else if(func == 5)
        {
            std::cout << "Enter amount to withdraw: ";
            std::cin >> num;
            account.deposit(num);
        }

        else if(func == 6)
        {
            account.display();
        }

        else if(func == -1)
            break;
    }
    return 0;
}