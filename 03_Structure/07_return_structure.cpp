// Function returning a structure
#include <iostream>
using namespace std;

struct Point { int x, y; };

Point midpoint(Point a, Point b) {
    Point m;
    m.x = (a.x + b.x) / 2;
    m.y = (a.y + b.y) / 2;
    return m;
}

int main() {
    Point a = {2, 4}, b = {8, 10};
    Point m = midpoint(a, b);
    cout << "Midpoint = (" << m.x << ", " << m.y << ")" << endl;
    return 0;
}
