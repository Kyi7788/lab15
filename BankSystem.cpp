#include "BankSystem.h"

BankSystem::BankSystem(ChildBank1 a, ChildATM2 b) : cb1(a), atm2(b) {}

void BankSystem::systemStatus() {
    cb1.showInfo();
    cb1.printAccountNumber();
    atm2.printLocation();
    atm2.showFeature();
}