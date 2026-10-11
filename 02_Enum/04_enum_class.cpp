// Scoped enumeration (enum class)
#include <iostream>
using namespace std;

enum class Fruit { Apple, Banana, Mango };
enum class Vehicle { Car, Bike, Bus };

int main() {
    Fruit f = Fruit::Banana;
    Vehicle v = Vehicle::Bus;
    // Must cast to int to print
    cout << "Fruit::Banana = " << static_cast<int>(f) << endl;
    cout << "Vehicle::Bus  = " << static_cast<int>(v) << endl;
    return 0;
}
