// Array of structures
#include <iostream>
#include <string>
using namespace std;

struct Student { int roll; string name; float marks; };

int main() {
    Student s[3] = {{1, "Asha", 85.5}, {2, "Ravi", 72.0}, {3, "Meena", 91.25}};
    for (int i = 0; i < 3; i++)
        cout << s[i].roll << "\t" << s[i].name << "\t" << s[i].marks << endl;
    return 0;
}
