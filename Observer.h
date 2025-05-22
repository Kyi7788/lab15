#pragma once
#include <string>

namespace BankSystem {
    class Observer {
    public:
        virtual void update(const std::string& message) = 0;
        virtual ~Observer() = default;
    };
}