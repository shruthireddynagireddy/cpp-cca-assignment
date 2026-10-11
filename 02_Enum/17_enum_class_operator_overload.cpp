// Overloading << for an enum class
#include <iostream>
using namespace std;

enum class Planet { Mercury, Venus, Earth, Mars };

ostream& operator<<(ostream& os, Planet p) {
    switch (p) {
        case Planet::Mercury: return os << "Mercury";
        case Planet::Venus:   return os << "Venus";
        case Planet::Earth:   return os << "Earth";
        case Planet::Mars:    return os << "Mars";
    }
    return os;
}

int main() {
    Planet p = Planet::Earth;
    cout << "We live on " << p << endl;
    cout << "Next planet: " << Planet::Mars << endl;
    return 0;
}
