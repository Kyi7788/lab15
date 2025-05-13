#include "BankAccount.h"

namespace BankSystem {
    BankAccount::BankAccount(string n, int b) : name(n), balance(b) {}

    BankAccount::~BankAccount() {
        cout << "BankAccount Destructor\n";
    }

    void printAccountDetails(BankAccount* acc) {
        acc->showInfo();
    }
}