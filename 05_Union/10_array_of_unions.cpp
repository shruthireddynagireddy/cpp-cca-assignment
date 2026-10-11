// Array of unions
#include <iostream>
using namespace std;

union Number {
    int i;
    float f;
};

int main() {
    Number arr[3];
    arr[0].i = 10;
    arr[1].f = 2.5f;
    arr[2].i = 30;
    cout << "arr[0].i = " << arr[0].i << endl;
    cout << "arr[1].f = " << arr[1].f << endl;
    cout << "arr[2].i = " << arr[2].i << endl;
    return 0;
}
