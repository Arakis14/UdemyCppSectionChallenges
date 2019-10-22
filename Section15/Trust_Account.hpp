#pragma once
#include "Savings_Account.h"


class Trusting_Account : public Savings_Account{
    friend std::ostream &operator<<(std::ostream &os, const Trusting_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Trusting Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    static constexpr double trust = 50.0;
    int count = 3;
protected:
    double int_rate;
public:
    Trusting_Account(std::string name = def_name, double balance =def_balance, double int_rate = def_int_rate);    
    bool deposit(double amount);
    bool withdraw(double amount);
};