// Dynamic array using new[] and delete[]
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) arr[i] = (i + 1) * 10;
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    cout << "Elements: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\nSum = " << sum << endl;
    delete[] arr;
    return 0;
}
