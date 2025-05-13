#include "ChildATM2.h"

namespace BankSystem {

    ChildATM2::ChildATM2(string loc, bool touch) : ATM(loc) {
        touchScreen = touch;
    }

    void ChildATM2::showInfo() {
        cout << "ATM at " << location;
        if (touchScreen)
            cout << " has Touchscreen" << endl;
        else
            cout << " does NOT have Touchscreen" << endl;
    }

    void ChildATM2::showFeature() {
        if (touchScreen)
            cout << "This ATM has a Touchscreen" << endl;
        else
            cout << "This ATM doesn't have a Touchscreen" << endl;
    }

    ChildATM2::~ChildATM2() {
        cout << "ChildATM2 Destructor\n";
    }
}