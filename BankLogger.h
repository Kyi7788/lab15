// BankLogger.h
#pragma once
#include "Observer.h"
#include <iostream>

namespace BankSystem {
    class BankLogger : public Observer {
    public:
        void update() override {
            std::cout << "BankLogger: Account state has changed." << std::endl;
        }
    };
}