// Count frequency of each element
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 1, 4, 2, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool visited[9] = {false};
    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;
        int count = 1;
        for (int j = i + 1; j < n; j++)
            if (arr[i] == arr[j]) { count++; visited[j] = true; }
        cout << arr[i] << " occurs " << count << " time(s)\n";
    }
    return 0;
}
