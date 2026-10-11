// Passing arrays to functions (1D and 2D)
#include <iostream>
using namespace std;

int sumArray(int arr[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) s += arr[i];
    return s;
}

int diagonalSum(int m[][3], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) s += m[i][i];
    return s;
}

int main() {
    int a[] = {5, 10, 15, 20};
    int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "Sum of 1D array = " << sumArray(a, 4) << endl;
    cout << "Main diagonal sum = " << diagonalSum(m, 3) << endl;
    return 0;
}
