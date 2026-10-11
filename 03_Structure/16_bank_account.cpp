// Simple bank account using a structure
#include <iostream>
#include <string>
using namespace std;

struct BankAccount {
    string holder;
    double balance;

    void deposit(double amt) { balance += amt; }
    bool withdraw(double amt) {
        if (amt > balance) return false;
        balance -= amt;
        return true;
    }
};

int main() {
    BankAccount acc = {"Sneha", 5000};
    acc.deposit(2000);
    cout << "After deposit: " << acc.balance << endl;
    if (!acc.withdraw(10000)) cout << "Insufficient funds\n";
    acc.withdraw(3000);
    cout << "After withdrawal: " << acc.balance << endl;
    return 0;
}
