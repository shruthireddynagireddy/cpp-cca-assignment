// Basic pointer: address and dereferencing
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* p = &x;
    cout << "Value of x     : " << x << endl;
    cout << "Address of x   : " << &x << endl;
    cout << "Value of p     : " << p << endl;
    cout << "Value at *p    : " << *p << endl;
    *p = 25;
    cout << "x after *p=25  : " << x << endl;
    return 0;
}
