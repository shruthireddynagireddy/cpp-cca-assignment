// Casting between int and enum
#include <iostream>
using namespace std;

enum Number { ZERO, ONE, TWO, THREE };

int main() {
    int x = 2;
    Number n = static_cast<Number>(x);   // int -> enum needs a cast
    int y = THREE;                        // enum -> int is implicit
    cout << "n = " << n << ", y = " << y << endl;
    cout << "ONE + TWO = " << ONE + TWO << endl;
    return 0;
}
