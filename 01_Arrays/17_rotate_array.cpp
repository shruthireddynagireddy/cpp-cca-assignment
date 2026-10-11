// Left rotate an array by d positions
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 3;
    int temp[7];
    for (int i = 0; i < n; i++) temp[i] = arr[(i + d) % n];
    cout << "Rotated left by " << d << ": ";
    for (int i = 0; i < n; i++) cout << temp[i] << " ";
    cout << endl;
    return 0;
}
