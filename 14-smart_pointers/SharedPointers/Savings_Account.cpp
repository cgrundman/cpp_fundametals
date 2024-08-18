#include "Savings_Account.h"

Savings_Account::Savings_Account(std::string name, double balance, double int_rate)
    : Account {name, balance}, int_rate{int_rate} {
}

// Deposit:
//      Amount supplied to deposit will be incremented by (amount * int_rate/100) 
//      and then the updated amount will be deposited
//
bool Savings_Account::deposit(double amount) {
    amount += amount * (int_rate/100);
    return Account::deposit(amount);
}

bool Savings_Account::withdraw(double amount) {
    return Account::withdraw(amount);
}

void Savings_Account::print(std::ostream &os) const {
    os.precision(2);
    os << std::fixed;   
    os << "[Savings_Account: " << name << ": " << balance << ", " << int_rate << "]";
}
