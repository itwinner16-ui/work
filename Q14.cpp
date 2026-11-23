
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string owner;
    double balance;

public:
    // Constructor
    BankAccount(string name, double money) {
        owner = name;
        balance = money;
    }

    // Deposit money
    void deposit(double amount) {
        if (amount > 0)
            balance += amount;
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount > balance)
            cout << "Not enough money!" << endl;
        else if (amount > 0)
            balance -= amount;
    }

    // Print account
    void print() {
        cout << "Owner: " << owner << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {

    BankAccount acc1("Eric", 1000);
    BankAccount acc2("John", 500);

    acc1.deposit(200);
    acc1.withdraw(100);

    acc2.deposit(300);
    acc2.withdraw(1000);

    cout << "\nAccount 1:\n";
    acc1.print();

    cout << "\nAccount 2:\n";
    acc2.print();

    return 0;
}
