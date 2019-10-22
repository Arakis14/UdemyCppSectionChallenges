#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    // test your code here
    std::cout << "Program completed successfully" << std::endl;
    try
    {
        auto test= std::make_unique<Checking_Account>("wiktor",-500);
    }
    catch (IllegalBalanceException &ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    try
    {
    Checking_Account frank = {"frank",-100};
    }
    catch (IllegalBalanceException &ex)
     {
        std::cerr << ex.what() << std::endl;
     }
    try
    {
    Savings_Account wiktor = {"wiktor",-100,5};
    }
    catch (IllegalBalanceException &ex)
     {
         std::cerr << ex.what() << std::endl;
     }
     auto frank = std::make_unique<Savings_Account>("Frank",500,5);
     try{
         frank->withdraw(600);
     }
     catch (InsufficientFundsException &ex)
     {
         std::cerr << ex.what() << std::endl;   
     }
    return 0;
}

