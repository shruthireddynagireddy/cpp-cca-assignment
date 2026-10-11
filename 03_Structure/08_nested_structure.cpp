// Nested structures
#include <iostream>
#include <string>
using namespace std;

struct Date { int day, month, year; };

struct Employee {
    string name;
    Date joining;
};

int main() {
    Employee e = {"Kiran", {15, 8, 2024}};
    cout << e.name << " joined on " << e.joining.day << "/"
         << e.joining.month << "/" << e.joining.year << endl;
    return 0;
}
