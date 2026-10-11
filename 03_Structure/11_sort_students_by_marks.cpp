// Sort an array of structures by marks
#include <iostream>
#include <string>
using namespace std;

struct Student { string name; int marks; };

int main() {
    Student s[] = {{"A", 72}, {"B", 95}, {"C", 60}, {"D", 88}};
    int n = 4;
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (s[j].marks < s[j + 1].marks) {
                Student t = s[j]; s[j] = s[j + 1]; s[j + 1] = t;
            }
    cout << "Ranking (highest first):\n";
    for (int i = 0; i < n; i++)
        cout << i + 1 << ". " << s[i].name << " - " << s[i].marks << endl;
    return 0;
}
