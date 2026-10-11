// Pointer to a function
#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }

int main() {
    int (*op)(int, int);
    op = add; cout << "add: " << op(10, 5) << endl;
    op = sub; cout << "sub: " << op(10, 5) << endl;
    op = mul; cout << "mul: " << op(10, 5) << endl;
    return 0;
}
