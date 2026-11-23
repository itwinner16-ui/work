
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
using namespace std;

class BankAccount {
private:
    string owner;
    double balance;

public:
    BankAccount(string name, double money);

    void deposit(double amount);
    void withdraw(double amount);
    void print();
};

#endif
