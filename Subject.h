#pragma once
#include "Observer.h"
#include <vector>
#include <algorithm>

namespace BankSystem {
    class Subject {
    private:
        std::vector<Observer*> observers;

    public:
        void attach(Observer* obs) {
            observers.push_back(obs);
        }

        void detach(Observer* obs) {
            observers.erase(std::remove(observers.begin(), observers.end(), obs), observers.end());
        }

        void notify(const std::string& message) {
            for (Observer* obs : observers) {
                obs->update(message);
            }
        }

        virtual ~Subject() = default;
    };
}