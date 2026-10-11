// Tagged union: track which member is active
#include <iostream>
using namespace std;

struct Variant {
    char tag;           // 'i', 'f' or 'c'
    union {
        int i;
        float f;
        char c;
    } u;
};

void print(const Variant& v) {
    switch (v.tag) {
        case 'i': cout << "int: " << v.u.i << endl; break;
        case 'f': cout << "float: " << v.u.f << endl; break;
        case 'c': cout << "char: " << v.u.c << endl; break;
    }
}

int main() {
    Variant a; a.tag = 'i'; a.u.i = 100;
    Variant b; b.tag = 'f'; b.u.f = 9.81f;
    Variant c; c.tag = 'c'; c.u.c = 'X';
    print(a); print(b); print(c);
    return 0;
}
