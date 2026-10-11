// Function that returns a pointer
#include <iostream>
using namespace std;

int* findMax(int* arr, int n) {
    int* maxPtr = arr;
    for (int i = 1; i < n; i++)
        if (arr[i] > *maxPtr) maxPtr = &arr[i];
    return maxPtr;
}

int main() {
    int arr[] = {12, 45, 7, 89, 23};
    int* m = findMax(arr, 5);
    cout << "Max = " << *m << " at index " << (m - arr) << endl;
    return 0;
}
