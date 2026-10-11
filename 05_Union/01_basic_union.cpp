// Basic union: all members share the same memory
#include <iostream>
using namespace std;

union Data {
    int i;
    float f;
    char c;
};

int main() {
    Data d;
    d.i = 65;
    cout << "d.i = " << d.i << endl;
    d.f = 3.14f;
    cout << "d.f = " << d.f << endl;   // i is now overwritten
    d.c = 'Z';
    cout << "d.c = " << d.c << endl;
    return 0;
}
