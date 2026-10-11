// Pointer to pointer
#include <iostream>
using namespace std;

int main() {
    int x = 42;
    int* p = &x;
    int** pp = &p;
    cout << "x   = " << x << endl;
    cout << "*p  = " << *p << endl;
    cout << "**pp= " << **pp << endl;
    **pp = 100;
    cout << "x after **pp = 100: " << x << endl;
    return 0;
}
