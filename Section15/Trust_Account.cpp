#include "Trust_Account.hpp"

Trusting_Account::Trusting_Account(std::string name, double balance, double int_rate)
    : Savings_Account {name, balance}, int_rate{int_rate} {
}
bool Trusting_Account::deposit(double amount) {
    if ( amount >= 50000.0){
            amount += trust + amount * (int_rate/100);
    return Account::deposit(amount);
    }
    else
    {
            amount += trust + amount * (int_rate/100);
        return Trusting_Account::deposit(amount);
    }
}
bool Trusting_Account::withdraw(double amount) {
    if (balance-amount >=0  && count > 0) {
        balance-=amount;
        count--;
        return true;
    } else
    {
        std::cout<<"Unable to withdraw $" << std::endl;
        return false;
    }
}

std::ostream &operator<<(std::ostream &os, const Trusting_Account &account) {
    os << "[Trusting_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%" << ", " << account.count << "]" ;
    return os;
}
