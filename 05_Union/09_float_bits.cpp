// Inspect the bit pattern of a float
#include <iostream>
#include <bitset>
using namespace std;

union FloatBits {
    float f;
    unsigned int bits;
};

int main() {
    FloatBits fb;
    fb.f = 5.75f;
    cout << "Float value : " << fb.f << endl;
    cout << "Bit pattern : " << bitset<32>(fb.bits) << endl;
    return 0;
}
