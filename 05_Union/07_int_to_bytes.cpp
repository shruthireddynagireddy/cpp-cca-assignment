// View the bytes of an integer using a union
#include <iostream>
using namespace std;

union IntBytes {
    unsigned int value;
    unsigned char bytes[4];
};

int main() {
    IntBytes u;
    u.value = 0x12345678;
    cout << hex << showbase;
    cout << "Value: " << u.value << endl;
    for (int i = 0; i < 4; i++)
        cout << "byte[" << dec << i << "] = " << hex << (int)u.bytes[i] << endl;
    return 0;
}
