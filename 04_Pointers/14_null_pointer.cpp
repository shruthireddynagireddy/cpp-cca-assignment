// nullptr and safe pointer usage
#include <iostream>
using namespace std;

void printValue(int* p) {
    if (p == nullptr) cout << "Pointer is null, cannot dereference\n";
    else cout << "Value = " << *p << endl;
}

int main() {
    int* p = nullptr;
    printValue(p);
    int x = 99;
    p = &x;
    printValue(p);
    return 0;
}
