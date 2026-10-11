// void pointer (generic pointer)
#include <iostream>
using namespace std;

int main() {
    int i = 10;
    double d = 3.5;
    char c = 'A';
    void* vp;

    vp = &i; cout << "int    : " << *(int*)vp << endl;
    vp = &d; cout << "double : " << *(double*)vp << endl;
    vp = &c; cout << "char   : " << *(char*)vp << endl;
    return 0;
}
