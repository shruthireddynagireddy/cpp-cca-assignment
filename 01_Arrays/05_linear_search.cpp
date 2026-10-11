// Linear search
#include <iostream>
using namespace std;

int main() {
    int arr[] = {15, 22, 8, 41, 36, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 41, pos = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) { pos = i; break; }
    }
    if (pos != -1) cout << key << " found at index " << pos << endl;
    else cout << key << " not found" << endl;
    return 0;
}
