// Array of pointers
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 30;
    int* ptr[3] = {&a, &b, &c};
    for (int i = 0; i < 3; i++)
        cout << "*ptr[" << i << "] = " << *ptr[i] << endl;

    const char* names[] = {"Alice", "Bob", "Charlie"};
    for (int i = 0; i < 3; i++) cout << names[i] << endl;
    return 0;
}
