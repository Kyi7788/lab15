#include <iostream>
using namespace std;

class BankAccount; // Forward declaration

// Friend function declarations
void checkBalance(BankAccount acc);             // Friend function 1
void sendMoney(BankAccount& from, BankAccount& to, int amount); // Friend function 2
void compareAccounts(BankAccount acc1, BankAccount acc2);       // Friend function 3

// Friend class 1
class ATM {
public:
    void deposit(BankAccount& acc, int amount);
};

// Friend class 2
class BankStaff {
public:
    void seeAccount(BankAccount acc);
};

// BankAccount class
class BankAccount {
private:
    string name;
    int balance;

public:
    BankAccount(string n, int b) {
        name = n;
        balance = b;
    }

    // Declare friend functions
    friend void checkBalance(BankAccount acc);
    friend void sendMoney(BankAccount& from, BankAccount& to, int amount);
    friend void compareAccounts(BankAccount acc1, BankAccount acc2);

    // Declare friend classes
    friend class ATM;
    friend class BankStaff;
};

// Friend function 1
void checkBalance(BankAccount acc) {
    cout << acc.name << "'s balance is " << acc.balance << endl;
}

// Friend function 2
void sendMoney(BankAccount& from, BankAccount& to, int amount) {
    if (from.balance >= amount) {
        from.balance -= amount;
        to.balance += amount;
        cout << "Sent " << amount << " from " << from.name << " to " << to.name << endl;
    }
    else {
        cout << "Not enough balance to send money." << endl;
    }
}

// Friend function 3
void compareAccounts(BankAccount acc1, BankAccount acc2) {
    if (acc1.balance > acc2.balance)
        cout << acc1.name << " has more money than " << acc2.name << endl;
    else
        cout << acc2.name << " has more or equal money than " << acc1.name << endl;
}

// ATM class methods
void ATM::deposit(BankAccount& acc, int amount) {
    acc.balance += amount;
    cout << "Deposited " << amount << " to " << acc.name << endl;
}

// BankStaff class methods
void BankStaff::seeAccount(BankAccount acc) {
    cout << "Staff checking account: " << acc.name << ", Balance: " << acc.balance << endl;
}

// Main
int main() {
    BankAccount a1("Alice", 1000);
    BankAccount a2("Bob", 500);

    checkBalance(a1);        // Friend function 1
    sendMoney(a1, a2, 300);  // Friend function 2
    compareAccounts(a1, a2); // Friend function 3

    ATM atm;
    atm.deposit(a2, 200);    // Friend class 1

    BankStaff staff;
    staff.seeAccount(a1);    // Friend class 2

    return 0;
}