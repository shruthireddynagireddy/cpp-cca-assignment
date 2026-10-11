// Traffic light using enum
#include <iostream>
using namespace std;

enum Light { RED, YELLOW, GREEN };

void showAction(Light l) {
    switch (l) {
        case RED:    cout << "STOP\n"; break;
        case YELLOW: cout << "GET READY\n"; break;
        case GREEN:  cout << "GO\n"; break;
    }
}

int main() {
    showAction(RED);
    showAction(YELLOW);
    showAction(GREEN);
    return 0;
}
