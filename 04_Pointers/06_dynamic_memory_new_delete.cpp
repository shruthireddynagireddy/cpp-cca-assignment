// Dynamic memory for a single variable
#include <iostream>
using namespace std;

int main() {
    int* p = new int;
    *p = 77;
    cout << "Value = " << *p << endl;
    delete p;

    double* d = new double(3.14);
    cout << "Double = " << *d << endl;
    delete d;
    return 0;
}
