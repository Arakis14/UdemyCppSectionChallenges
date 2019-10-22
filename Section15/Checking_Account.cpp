#include "Checking_Account.hpp"

Checking_Account::Checking_Account(std::string name, double balance) 
    : Account {name,balance} {}



bool Checking_Account::withdraw(double amount) {
    if (balance-amount-withdrawal_fee >=0) {
        balance-=amount-withdrawal_fee;
        return true;
    } else
        return false;
}

std::ostream &operator<<(std::ostream &os, const Checking_Account &account) {
    os << "Checkinh_Account: " << account.name << ": " << account.balance << "";
    return os;
}


