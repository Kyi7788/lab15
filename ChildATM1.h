#pragma once
#include "ATM.h"
using namespace std;
namespace BankSystem {
    class ChildATM1 : public ATM {
    public:
        string machineID;
        ChildATM1(string loc, string id);
        void showInfo() override;
        void showID();
        ~ChildATM1();
    };
}