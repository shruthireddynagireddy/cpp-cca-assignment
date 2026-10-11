// Pointer to structure and dynamic structure
#include <iostream>
#include <string>
using namespace std;

struct Student { int roll; string name; };

int main() {
    Student s = {1, "Maya"};
    Student* p = &s;
    cout << p->roll << " " << p->name << endl;

    Student* d = new Student{2, "Nikhil"};
    cout << d->roll << " " << d->name << endl;
    delete d;
    return 0;
}
