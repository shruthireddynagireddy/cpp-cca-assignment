// Union containing structures
#include <iostream>
using namespace std;

struct Circle    { double radius; };
struct Rectangle { double length, width; };

union Shape {
    Circle c;
    Rectangle r;
};

int main() {
    Shape s;
    s.c.radius = 5;
    cout << "Circle area = " << 3.14159 * s.c.radius * s.c.radius << endl;
    s.r.length = 4; s.r.width = 6;
    cout << "Rectangle area = " << s.r.length * s.r.width << endl;
    cout << "sizeof(Shape) = " << sizeof(Shape) << endl;
    return 0;
}
