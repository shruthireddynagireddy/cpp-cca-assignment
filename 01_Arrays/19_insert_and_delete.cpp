// Insert and delete an element at a given position
#include <iostream>
using namespace std;

void display(int a[], int n) {
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;
    cout << "Original: "; display(arr, n);

    int pos = 2, val = 25;                 // insert 25 at index 2
    for (int i = n; i > pos; i--) arr[i] = arr[i - 1];
    arr[pos] = val; n++;
    cout << "After insert: "; display(arr, n);

    pos = 4;                               // delete element at index 4
    for (int i = pos; i < n - 1; i++) arr[i] = arr[i + 1];
    n--;
    cout << "After delete: "; display(arr, n);
    return 0;
}
