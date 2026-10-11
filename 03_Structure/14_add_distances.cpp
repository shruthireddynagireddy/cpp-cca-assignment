// Add two distances given in feet and inches
#include <iostream>
using namespace std;

struct Distance { int feet; int inches; };

Distance add(Distance a, Distance b) {
    Distance r;
    r.inches = a.inches + b.inches;
    r.feet = a.feet + b.feet + r.inches / 12;
    r.inches %= 12;
    return r;
}

int main() {
    Distance d1 = {5, 9}, d2 = {3, 7};
    Distance d = add(d1, d2);
    cout << "Total = " << d.feet << " ft " << d.inches << " in" << endl;
    return 0;
}
