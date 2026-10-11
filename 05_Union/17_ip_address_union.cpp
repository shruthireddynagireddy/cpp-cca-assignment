// IPv4 address as 32-bit integer and 4 bytes
#include <iostream>
using namespace std;

union IPv4 {
    unsigned int addr;
    unsigned char octet[4];
};

int main() {
    IPv4 ip;
    ip.octet[0] = 192; ip.octet[1] = 168; ip.octet[2] = 1; ip.octet[3] = 10;
    cout << "IP address: ";
    for (int i = 0; i < 4; i++) {
        cout << (int)ip.octet[i];
        if (i < 3) cout << ".";
    }
    cout << "\n32-bit value: " << ip.addr << endl;
    return 0;
}
