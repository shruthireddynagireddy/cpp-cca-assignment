// Memory comparison: struct vs union
#include <iostream>
using namespace std;

struct S { int i; double d; char c; };
union  U { int i; double d; char c; };

int main() {
    cout << "sizeof(struct) = " << sizeof(S) << " bytes" << endl;
    cout << "sizeof(union)  = " << sizeof(U) << " bytes" << endl;
    return 0;
}
