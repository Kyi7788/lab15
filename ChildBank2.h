#pragma once
#include "BankAccount.h"

namespace BankSystem {
    class ChildBank2 : public BankAccount {
    public:
        string accountType;
        ChildBank2(string n, int b, string type);
        void showInfo() override;
        void printAccountType();
        ~ChildBank2();
    };
}