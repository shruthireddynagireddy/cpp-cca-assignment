// Length of a string using a pointer
#include <iostream>
using namespace std;

int main() {
    const char* str = "Hello, Pointers!";
    const char* p = str;
    int len = 0;
    while (*p != '\0') { len++; p++; }
    cout << "String: " << str << endl;
    cout << "Length = " << len << endl;
    return 0;
}
