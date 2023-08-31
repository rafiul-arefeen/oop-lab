#include <iostream>
#include <string>
enum _accType
{
    Current,
    Savings
};

class BankAccount
{
private:
    int accNum;
    std::string accName;
    _accType accType;
    float balance;
    const float minBalance;

public:
    BankAccount() : minBalance(0)
    {
    }
    BankAccount(int num, std::string name, _accType type, float bal, float minBal) : accNum(num), accName(name), accType(type), balance(bal), minBalance(minBal)
    {
    }
    ~BankAccount()
    {
        std::cout << "Account of " << accName << " with account no " << accNum << " is destroyed with a balance BDT " << balance << "." << std::endl;
    }
    void showInfo()
    {
        std::cout << "Account number: " << accNum << std::endl;
        std::cout << "Account name: " << accName << std::endl;
        std::cout << "Account type: ";
        if (accType == 1)
            std::cout << "Current" << std::endl;
        else
            std::cout << "Savings" << std::endl;
        std::cout << "Balance: " << balance << std::endl;
        std::cout << "Minimum balance: " << minBalance << std::endl;
    }
    void showBalance()
    {
        std::cout << "Balance: " << balance << std::endl;
    }
    void deposit(int amount)
    {
        if (amount <= 0)
            std::cout << "Error: Amount must be greater than 0." << std::endl;
        else
        {
            balance += amount;
            std::cout << "Deposited!" << std::endl;
            showBalance();
        }
    }
    void withdraw(int amount)
    {
        if (amount <= 0 || (balance - amount) < minBalance)
            std::cout << "Error: Invalid withdrawal amount." << std::endl;
        else
        {
            balance -= amount;
            std::cout << "Withdrawal complete!" << std::endl;
            showBalance();
        }
    }
    void giveInterest()
    {
        float interest = balance * 0.03;
        interest -= (interest * .1);
        balance += interest;
    }
    void giveInterest(float amount)
    {
        float per = amount / 100;
        float interest = balance * per;
        interest -= (interest * .1);
        balance += interest;
    }
};

int main()
{
    BankAccount account_1(114, "Arefeen", _accType::Savings, 10540, 2000);
    account_1.showInfo();
    account_1.deposit(5000);
    account_1.withdraw(1000);
    account_1.giveInterest();
    account_1.showBalance();
    account_1.giveInterest(7);
    account_1.showBalance();

    return 0;
}