// Structure with constructors
#include <iostream>
#include <string>
using namespace std;

struct Car {
    string brand;
    int year;
    Car() : brand("Unknown"), year(0) {}
    Car(string b, int y) : brand(b), year(y) {}
    void show() { cout << brand << " (" << year << ")" << endl; }
};

int main() {
    Car c1;
    Car c2("Toyota", 2022);
    c1.show();
    c2.show();
    return 0;
}
