#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
    double balance;
    std::string name;
    void deposit(double amount);
    void withdraw(double amount);
    Account();
    ~Account();
};

#endif // ACCOUNT_H
