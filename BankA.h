#pragma once
#include <iostream>
using namespace std;
namespace BankA {
    class Account {
    public:
        virtual void showInfo() {
            std::cout << "BankA Basic Account Info" << std::endl;
        }
    };

    class PremiumAccount : public Account {
    public:
        void showInfo() override {
            std::cout << "BankA Premium Account with cashback" << std::endl;
        }
    };
}