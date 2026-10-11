// Different ways of initializing a structure
#include <iostream>
using namespace std;

struct Point { int x, y; };

int main() {
    Point p1 = {3, 4};
    Point p2{5, 6};
    Point p3;
    p3.x = 7; p3.y = 8;
    cout << "p1 = (" << p1.x << ", " << p1.y << ")\n";
    cout << "p2 = (" << p2.x << ", " << p2.y << ")\n";
    cout << "p3 = (" << p3.x << ", " << p3.y << ")\n";
    return 0;
}
