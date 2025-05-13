#pragma once
#include <iostream>
using namespace std;
namespace BankB {
    class Account {
    public:
        virtual void showInfo() {
            std::cout << "BankB Basic Account Info" << std::endl;
        }
    };

    class PremiumAccount : public Account {
    public:
        void showInfo() override {
            std::cout << "BankB Premium Account with travel rewards" << std::endl;
        }
    };
}

