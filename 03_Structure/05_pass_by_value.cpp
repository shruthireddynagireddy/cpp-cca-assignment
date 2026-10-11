// Passing a structure to a function by value
#include <iostream>
using namespace std;

struct Rectangle { double length, width; };

double area(Rectangle r) { return r.length * r.width; }

int main() {
    Rectangle r = {5.5, 4.0};
    cout << "Area = " << area(r) << endl;
    return 0;
}
