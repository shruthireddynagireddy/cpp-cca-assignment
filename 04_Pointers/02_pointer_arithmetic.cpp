// Pointer arithmetic
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int* p = arr;
    cout << "*p = " << *p << endl;
    p++;
    cout << "After p++ : " << *p << endl;
    p += 2;
    cout << "After p+=2: " << *p << endl;
    p--;
    cout << "After p-- : " << *p << endl;
    cout << "Distance between &arr[4] and &arr[0] = " << (&arr[4] - &arr[0]) << endl;
    return 0;
}
