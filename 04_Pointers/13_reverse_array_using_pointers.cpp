// Reverse an array using two pointers
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int *start = arr, *end = arr + n - 1;
    while (start < end) {
        int t = *start;
        *start = *end;
        *end = t;
        start++; end--;
    }
    cout << "Reversed: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
