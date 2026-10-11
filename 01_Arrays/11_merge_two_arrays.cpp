// Merge two arrays into a third array
#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 3, 5, 7};
    int b[] = {2, 4, 6, 8, 10};
    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);
    int c[20], k = 0;
    for (int i = 0; i < n1; i++) c[k++] = a[i];
    for (int i = 0; i < n2; i++) c[k++] = b[i];
    cout << "Merged: ";
    for (int i = 0; i < k; i++) cout << c[i] << " ";
    cout << endl;
    return 0;
}
