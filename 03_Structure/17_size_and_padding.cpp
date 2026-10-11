// sizeof structure and memory padding
#include <iostream>
using namespace std;

struct A { char c; int i; char d; };   // padding added
struct B { int i; char c; char d; };   // better ordering

int main() {
    cout << "sizeof(A) = " << sizeof(A) << " bytes" << endl;
    cout << "sizeof(B) = " << sizeof(B) << " bytes" << endl;
    cout << "Sum of members of A = " << sizeof(char) + sizeof(int) + sizeof(char) << endl;
    return 0;
}
