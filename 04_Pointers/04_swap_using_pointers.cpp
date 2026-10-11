// Swap two numbers using pointers
#include <iostream>
using namespace std;

void swapNum(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int x = 5, y = 9;
    cout << "Before: x=" << x << " y=" << y << endl;
    swapNum(&x, &y);
    cout << "After : x=" << x << " y=" << y << endl;
    return 0;
}
