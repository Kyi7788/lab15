#pragma once
#include <iostream>

using namespace std;
    template <class T>
    class StatManager {
    private:
        T& obj;

    public:
        StatManager(T& objRef);
        void increaseStat(int amount);
        void printStats();
    };


