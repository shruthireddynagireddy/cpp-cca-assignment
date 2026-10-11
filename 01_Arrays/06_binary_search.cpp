// Binary search on a sorted array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 23, low = 0, high = n - 1, pos = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) { pos = mid; break; }
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    if (pos != -1) cout << key << " found at index " << pos << endl;
    else cout << key << " not found" << endl;
    return 0;
}
