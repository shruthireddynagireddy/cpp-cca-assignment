// Passing a structure by reference (modifies original)
#include <iostream>
using namespace std;

struct Account { int id; double balance; };

void deposit(Account& a, double amt) { a.balance += amt; }

int main() {
    Account acc = {1, 1000.0};
    deposit(acc, 500);
    cout << "Balance after deposit = " << acc.balance << endl;
    return 0;
}
