// Structure containing an array
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int marks[3];
};

int main() {
    Student s = {"Divya", {80, 75, 90}};
    int total = 0;
    for (int i = 0; i < 3; i++) total += s.marks[i];
    cout << s.name << " total = " << total << ", average = " << total / 3.0 << endl;
    return 0;
}
