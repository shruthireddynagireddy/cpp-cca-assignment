// Structure with member functions
#include <iostream>
using namespace std;

struct Circle {
    double radius;
    double area() { return 3.14159 * radius * radius; }
    double circumference() { return 2 * 3.14159 * radius; }
};

int main() {
    Circle c = {7};
    cout << "Area = " << c.area() << endl;
    cout << "Circumference = " << c.circumference() << endl;
    return 0;
}
