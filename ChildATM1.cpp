#include "ChildATM1.h"

namespace BankSystem {
    ChildATM1::ChildATM1(string loc, string id) : ATM(loc) {
        machineID = id;
    }

    void ChildATM1::showInfo() {
        cout << "ATM ID: " << machineID << " at " << location << endl;
    }

    void ChildATM1::showID() {
        cout << "Machine ID: " << machineID << endl;
    }

    ChildATM1::~ChildATM1() {
        cout << "ChildATM1 Destructor\n";
    }
}