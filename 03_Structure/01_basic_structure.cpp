// Basic structure
#include <iostream>
#include <string>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

int main() {
    Student s;
    s.roll = 101;
    s.name = "Anil";
    s.marks = 88.5;
    cout << "Roll: " << s.roll << "\nName: " << s.name << "\nMarks: " << s.marks << endl;
    return 0;
}
