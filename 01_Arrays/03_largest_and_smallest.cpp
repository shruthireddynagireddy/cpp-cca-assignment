// Find largest and smallest element
#include <iostream>
using namespace std;

int main() {
    int arr[] = {45, 12, 89, 3, 67, 24};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mx = arr[0], mn = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > mx) mx = arr[i];
        if (arr[i] < mn) mn = arr[i];
    }
    cout << "Largest = " << mx << endl;
    cout << "Smallest = " << mn << endl;
    return 0;
}
