// Using enum with switch
#include <iostream>
using namespace std;

enum Color { RED, GREEN, BLUE };

int main() {
    Color c = GREEN;
    switch (c) {
        case RED:   cout << "Color is Red\n"; break;
        case GREEN: cout << "Color is Green\n"; break;
        case BLUE:  cout << "Color is Blue\n"; break;
    }
    return 0;
}
