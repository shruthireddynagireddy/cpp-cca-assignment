// Dynamic 2D array using pointer to pointer
#include <iostream>
using namespace std;

int main() {
    int rows = 3, cols = 4;
    int** m = new int*[rows];
    for (int i = 0; i < rows; i++) m[i] = new int[cols];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            m[i][j] = i * cols + j + 1;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) cout << m[i][j] << "\t";
        cout << endl;
    }

    for (int i = 0; i < rows; i++) delete[] m[i];
    delete[] m;
    return 0;
}
