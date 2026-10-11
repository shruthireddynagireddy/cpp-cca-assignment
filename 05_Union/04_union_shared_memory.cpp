// Members of a union share the same address
#include <iostream>
using namespace std;

union Shared {
    int a;
    float b;
    char c;
};

int main() {
    Shared s;
    cout << "Address of a: " << &s.a << endl;
    cout << "Address of b: " << &s.b << endl;
    cout << "Address of c: " << (void*)&s.c << endl;
    return 0;
}
