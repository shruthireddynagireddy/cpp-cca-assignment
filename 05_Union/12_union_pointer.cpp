// Pointer to a union
#include <iostream>
using namespace std;

union Item {
    int i;
    double d;
};

int main() {
    Item item;
    Item* p = &item;
    p->i = 123;
    cout << "p->i = " << p->i << endl;
    p->d = 45.67;
    cout << "p->d = " << p->d << endl;
    return 0;
}
