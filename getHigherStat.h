#pragma once

    template <typename T>
    int getHigherStat(T& obj1, T& obj2) {
        return (obj1.getStat() > obj2.getStat()) ? obj1.getStat() : obj2.getStat();
    }
