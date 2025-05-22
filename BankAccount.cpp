#include "BankAccount.h"

namespace BankSystem {

    BankAccount::BankAccount(string n, int b) : name(n), balance(b) {}

    BankAccount::~BankAccount() {
        cout << "BankAccount Destructor\n";
    }

    void printAccountDetails(BankAccount* acc) {
        acc->showInfo();
    }

    void BankAccount::deposit(int amount) {
        balance += amount;
        notify("Deposit of " + std::to_string(amount) + " made.");
    }

    void BankAccount::withdraw(int amount) {
        if (balance >= amount) {
            balance -= amount;
            notify("Withdrawal of " + std::to_string(amount) + " made.");
        }
        else {
            notify("Withdrawal of " + std::to_string(amount) + " failed: insufficient funds.");
        }
    }
}
