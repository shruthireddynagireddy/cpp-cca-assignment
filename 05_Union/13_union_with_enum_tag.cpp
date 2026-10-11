// Union with an enum as type tag
#include <iostream>
using namespace std;

enum Type { INT, DOUBLE, CHAR };

struct Value {
    Type type;
    union {
        int i;
        double d;
        char c;
    };
};

void print(const Value& v) {
    switch (v.type) {
        case INT:    cout << "int: " << v.i << endl; break;
        case DOUBLE: cout << "double: " << v.d << endl; break;
        case CHAR:   cout << "char: " << v.c << endl; break;
    }
}

int main() {
    Value a; a.type = INT;    a.i = 7;
    Value b; b.type = DOUBLE; b.d = 3.14159;
    Value c; c.type = CHAR;   c.c = 'Q';
    print(a); print(b); print(c);
    return 0;
}
