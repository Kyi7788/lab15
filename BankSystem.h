#pragma once
#include "ChildBank1.h"
#include "ChildATM2.h"

class BankSystem {
public:
    ChildBank1 cb1;
    ChildATM2 atm2;
    BankSystem(ChildBank1 a, ChildATM2 b);
    void systemStatus();
};
