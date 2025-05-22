#pragma once
#include <iostream>
#include <string>
#include "Subject.h"

using namespace std;

namespace BankSystem {
    class BankAccount : public Subject {
    protected:
        string name;
        int balance;

    public:
        BankAccount(string n, int b);
        virtual void showInfo() = 0;
        virtual ~BankAccount();

        void deposit(int amount);
        void withdraw(int amount);
    };

    void printAccountDetails(BankAccount* acc);
}
