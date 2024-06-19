#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance)
    : Account {name, balance} {
}

// Withdraw:
//      Amount withdrawn will be increased by the fee ($1.50)
// 

bool Checking_Account::withdraw(double amount) {
    amount += def_fee;
    return Account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &os, const Checking_Account &account) {
    os << "[Checking_Account: " << account.name << ": " << account.balance << "]";
    return os;
}
