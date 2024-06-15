#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.h"

// Savings Account class 
// Deposit method increments amount to be deposited by amount * int_rate percentage!!
// So a 1000 deposit at 5% interest rate will deposit 1000 + 50 = 1050

// Withdraw method does not specialize

class Savings_Account: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Savings_Account &account);
protected:
    double int_rate;
public:
    Savings_Account();
    Savings_Account(double balance, double int_rate);
    void deposit(double amount);
    // Withdraw is inherited
};

#endif // _SAVINGS_ACCOUNT_H_