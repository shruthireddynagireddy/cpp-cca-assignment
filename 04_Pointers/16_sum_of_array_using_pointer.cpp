// Sum of array elements using a pointer
#include <iostream>
using namespace std;

int sumArray(int* p, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += *(p + i);
    return sum;
}

int main() {
    int arr[] = {3, 6, 9, 12, 15};
    cout << "Sum = " << sumArray(arr, 5) << endl;
    return 0;
}
