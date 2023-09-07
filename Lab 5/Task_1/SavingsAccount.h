#pragma once
class SavingsAccount
{
public:
    SavingsAccount(double val);
    ~SavingsAccount();

    double GetBalance() { return balance; }
    void SetBalance(double val) { balance = val; }
    static double GetannualInterestRate() { return annualInterestRate; }
    static void SetannualInterestRate(double val) { annualInterestRate = val; }

    double calculateMonthlyInterest();
    static void modifyInterestRate(int val);

private:
    double balance;
    double monthlyInterest;
    static double annualInterestRate;
    static int objectsCreated;
    static int objectsDestroyed;
};