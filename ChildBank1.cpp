#include "ChildBank1.h"
namespace BankSystem {

    ChildBank1::ChildBank1(string n, int b, int accNum) : BankAccount(n, b) {
        accountNumber = accNum;
        objectCount++;   // Increment on object creation
    }

    void ChildBank1::showInfo() {
        cout << name << " has account number " << accountNumber << " with balance " << balance << endl;
    }

    void ChildBank1::printAccountNumber(const std::string& prefix) const {
        std::cout << prefix << accountNumber << std::endl;
    }


    ChildBank1::~ChildBank1() {
        cout << "ChildBank1 Destructor\n";

    }

    // For templates
    int ChildBank1::getStat() const {
        return balance;
    }

    void ChildBank1::increaseStat(int amt) {
        balance += amt;
    }

    void ChildBank1::printStats() {
        showInfo();
    }

    ChildBank1 ChildBank1::operator+(const ChildBank1& other) const {
        return ChildBank1(this->name + "&" + other.name, this->balance + other.balance, 0);
    }

    bool ChildBank1::operator==(const ChildBank1& other) const {
        return this->balance == other.balance;
    }

    bool ChildBank1::operator&&(const ChildBank1& other) const {
        return (this->balance > 1000 && other.balance > 1000);
    }

    int ChildBank1::objectCount = 0;



    int ChildBank1::getObjectCount() {
        return objectCount;
    }

    int ChildBank1::getDefaultAccountNumber() {
        return 100000; // Default account number


    }
}
