#include "ChildBank2.h"
namespace BankSystem {
    ChildBank2::ChildBank2(string n, int b, string type) : BankAccount(n, b) {
        accountType = type;
    }

    void ChildBank2::showInfo() {
        cout << name << " has a " << accountType << " account with balance " << balance << endl;
    }

    void ChildBank2::printAccountType() {
        cout << "Account Type: " << accountType << endl;
    }

    ChildBank2::~ChildBank2() {
        cout << "ChildBank2 Destructor\n";
    }
}