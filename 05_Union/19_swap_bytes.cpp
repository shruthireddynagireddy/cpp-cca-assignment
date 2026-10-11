// Swap byte order of a 32-bit integer using a union
#include <iostream>
using namespace std;

union Swap {
    unsigned int value;
    unsigned char b[4];
};

int main() {
    Swap s;
    s.value = 0x11223344;
    cout << hex << "Original : " << s.value << endl;
    unsigned char t;
    t = s.b[0]; s.b[0] = s.b[3]; s.b[3] = t;
    t = s.b[1]; s.b[1] = s.b[2]; s.b[2] = t;
    cout << "Swapped  : " << s.value << endl;
    return 0;
}
