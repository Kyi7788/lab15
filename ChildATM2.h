#pragma once
#include "ATM.h"
using namespace std;
namespace BankSystem {
    class ChildATM2 : public ATM {
    public:
        bool touchScreen;
        ChildATM2(string loc, bool touch);
        void showInfo() override;
        void showFeature();
        ~ChildATM2();
    };
}