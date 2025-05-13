#include "ATM.h"

namespace BankSystem {
    ATM::ATM(string loc) {
        location = loc;
    }

    void ATM::printLocation() {
        cout << "ATM Location: " << location << endl;
    }

    void ATM::showInfo() {
        cout << "ATM Info at: " << location << endl;
    }

    ATM::~ATM() {
        cout << "ATM Destructor\n";
    }
}