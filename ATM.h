#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace BankSystem {
    class ATM {
    protected:
        string location;

    public:
        ATM(string loc);
        virtual void showInfo();
        void printLocation();
        virtual ~ATM();
    };
}