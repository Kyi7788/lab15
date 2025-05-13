#include "StatManager.h"


    // Constructor
    template <typename T>
    StatManager<T>::StatManager(T& objRef) : obj(objRef) {}

    // Increase stat
    template <typename T>
    void StatManager<T>::increaseStat(int amount) {
        obj.increaseStat(amount);
    }

    // Print stats
    template <typename T>
    void StatManager<T>::printStats() {
        obj.printStats();
    }


