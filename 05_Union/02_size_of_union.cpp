// Size of a union = size of its largest member
#include <iostream>
using namespace std;

union Sample {
    char c;
    int i;
    double d;
};

int main() {
    cout << "sizeof(char)   = " << sizeof(char) << endl;
    cout << "sizeof(int)    = " << sizeof(int) << endl;
    cout << "sizeof(double) = " << sizeof(double) << endl;
    cout << "sizeof(union)  = " << sizeof(Sample) << endl;
    return 0;
}
