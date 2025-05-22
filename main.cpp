#include "BankAccount.h"
#include "ChildBank1.h"
#include "ChildBank2.h"
#include "ATM.h"
#include "ChildATM1.h"
#include "ChildATM2.h"

#include "BankNotice.h"
#include "BankA.h"
#include "BankB.h"

using namespace BankSystem;

int main() {
    BankAccount* acc1 = new ChildBank1("Alice", 2000, 98765);
    BankAccount* acc2 = new ChildBank2("Bob", 3000, "Savings");

    printAccountDetails(acc1);
    printAccountDetails(acc2);

    delete acc1;
    delete acc2;

    ATM* atm1 = new ChildATM1("Warsaw", "ATM001");
    ATM* atm2 = new ChildATM2("Krakow", true);

    atm1->showInfo();
    atm2->showInfo();

    delete atm1;
    delete atm2;





    Utility::BankNotice::display("Scheduled maintenance at 10 PM.");

    BankA::PremiumAccount accA;
    BankB::PremiumAccount accB;
    accA.showInfo();
    accB.showInfo();




    try {
        BankAccount* acc1 = new ChildBank1("Alice", -2000, 98765);  // Will throw
    }
    catch (const invalid_argument& e) {
        cout << "Error creating account: " << e.what() << endl;
    }


    try {
        ChildBank1 acc("Alice", 2000, 12345);
        acc.withdraw(50);  // Too low
    }
    catch (const out_of_range& e) {
        cout << "Withdrawal error: " << e.what() << endl;
    }

    try {
        ChildBank2 acc2("Bob", 3000, "Savings");
        acc2.upgradeAccount();  // Will throw
    }
    catch (const logic_error& e) {
        cout << "Upgrade error: " << e.what() << endl;
    }











    return 0;
}
