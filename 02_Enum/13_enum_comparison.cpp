// Comparing enum values
#include <iostream>
using namespace std;

enum Size { SMALL = 1, MEDIUM, LARGE };

int main() {
    Size a = SMALL, b = LARGE;
    if (a < b) cout << "SMALL is less than LARGE\n";
    if (a != b) cout << "They are different sizes\n";
    if (b == LARGE) cout << "b is LARGE\n";
    return 0;
}
