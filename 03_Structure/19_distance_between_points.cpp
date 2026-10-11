// Distance between two points
#include <iostream>
#include <cmath>
using namespace std;

struct Point { double x, y; };

double distance(Point a, Point b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

int main() {
    Point a = {1, 2}, b = {4, 6};
    cout << "Distance = " << distance(a, b) << endl;
    return 0;
}
