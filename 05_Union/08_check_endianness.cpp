// Check whether the machine is little-endian or big-endian
#include <iostream>
using namespace std;

union Endian {
    unsigned int i;
    unsigned char c[4];
};

int main() {
    Endian e;
    e.i = 1;
    if (e.c[0] == 1) cout << "Little-endian machine" << endl;
    else cout << "Big-endian machine" << endl;
    return 0;
}
