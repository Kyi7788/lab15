#pragma once
#include "BankAccount.h"





namespace BankSystem {
    class ChildBank1 : public BankAccount {
    private:
        static int objectCount;
    public:
        int accountNumber;
        ChildBank1(string n, int b, int accNum);
        void showInfo() override;
        void printAccountNumber(const std::string& prefix) const;



        void withdraw(int amount);


        static int getObjectCount();
        ~ChildBank1();

        // For templates
        int getStat() const;
        void increaseStat(int amt);
        void printStats();



        ChildBank1 operator+(const ChildBank1& other)const;
        bool operator==(const ChildBank1& other)const;
        bool operator&&(const ChildBank1& other)const;

        // Static function to return default account number
        static int getDefaultAccountNumber();

    };
}
