#pragma once
#include "Observer.h"
#include <iostream>

namespace BankSystem {
    class AccountNotifier : public Observer {
    public:
        void update(const std::string& message) override {
            std::cout << "[Notifier] " << message << std::endl;
        }
    };
}
