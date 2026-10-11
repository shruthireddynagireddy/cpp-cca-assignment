// Traditional union vs std::variant (C++17, type-safe)
#include <iostream>
#include <variant>
#include <string>
using namespace std;

union OldStyle {
    int i;
    float f;
};

int main() {
    OldStyle o;
    o.i = 10;
    cout << "union   : " << o.i << endl;

    variant<int, float, string> v = 42;
    cout << "variant : " << get<int>(v) << endl;
    v = string("Hello");
    cout << "variant : " << get<string>(v) << endl;
    cout << "Active index = " << v.index() << endl;
    return 0;
}
