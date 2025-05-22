#pragma once
#include "Observer.h"
#include <iostream>

namespace BankSystem {
    class AccountLogger : public Observer {
    public:
        void update(const std::string& message) override {
            std::cout << "[Logger] " << message << std::endl;
        }
    };
}