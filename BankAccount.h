#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace BankSystem {
    class BankAccount {
    protected:
        string name;
        int balance;

    public:
        BankAccount(string n, int b);
        virtual void showInfo() = 0;
        virtual ~BankAccount();
    };

    void printAccountDetails(BankAccount* acc);

}