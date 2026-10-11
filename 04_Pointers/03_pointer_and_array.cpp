// Accessing array elements using pointers
#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int n = 5;
    int* p = arr;
    for (int i = 0; i < n; i++)
        cout << "arr[" << i << "] = " << *(p + i) << " (address " << (p + i) << ")\n";
    return 0;
}
