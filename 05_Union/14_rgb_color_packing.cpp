// Pack/unpack an RGBA colour using a union
#include <iostream>
using namespace std;

union Color {
    unsigned int rgba;
    struct { unsigned char r, g, b, a; } ch;
};

int main() {
    Color c;
    c.ch.r = 255; c.ch.g = 128; c.ch.b = 64; c.ch.a = 255;
    cout << "R=" << (int)c.ch.r << " G=" << (int)c.ch.g
         << " B=" << (int)c.ch.b << " A=" << (int)c.ch.a << endl;
    cout << "Packed value = " << hex << c.rgba << endl;
    return 0;
}
