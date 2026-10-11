// Enum as bit flags (permissions)
#include <iostream>
using namespace std;

enum Permission { READ = 1, WRITE = 2, EXECUTE = 4 };

int main() {
    int perm = READ | WRITE;
    cout << "Permission value: " << perm << endl;
    cout << "Can read?    " << ((perm & READ) ? "Yes" : "No") << endl;
    cout << "Can write?   " << ((perm & WRITE) ? "Yes" : "No") << endl;
    cout << "Can execute? " << ((perm & EXECUTE) ? "Yes" : "No") << endl;
    perm |= EXECUTE;
    cout << "After adding execute: " << perm << endl;
    return 0;
}
