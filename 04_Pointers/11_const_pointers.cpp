// const with pointers
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    const int* p1 = &a;      // pointer to const int: can't change *p1
    p1 = &b;                 // OK: can change where it points

    int* const p2 = &a;      // const pointer: can't change address
    *p2 = 50;                // OK: can change the value

    const int* const p3 = &a; // neither can change

    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;
    cout << "*p3 = " << *p3 << endl;
    return 0;
}
