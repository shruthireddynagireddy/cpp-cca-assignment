// Remove duplicates from an array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int res[20], k = 0;
    for (int i = 0; i < n; i++) {
        bool dup = false;
        for (int j = 0; j < k; j++)
            if (res[j] == arr[i]) { dup = true; break; }
        if (!dup) res[k++] = arr[i];
    }
    cout << "Unique elements: ";
    for (int i = 0; i < k; i++) cout << res[i] << " ";
    cout << endl;
    return 0;
}
