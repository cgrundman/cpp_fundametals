#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include "Account.h"

// Checking Account is a type of Account
//   adds withdrawal fee
// Withdraw: 
//      $1.50 fee for every withdrawal
// Deposit:
//      Same as vanilla account
//

class Checking_Account: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_fee = 1.5;
protected:
    ;
public:
    Checking_Account(std::string name = def_name, double balance = def_balance);    
    bool withdraw(double);
    // Inherits the Account::withdraw methods
};

#endif // CHECKING_ACCOUNT_H