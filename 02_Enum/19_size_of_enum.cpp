// Size of enum types and range of values
#include <iostream>
using namespace std;

enum Color { RED, GREEN, BLUE };
enum class Status : char { OK, ERROR };

int main() {
    cout << "sizeof(Color)  = " << sizeof(Color) << " bytes\n";
    cout << "sizeof(Status) = " << sizeof(Status) << " byte\n";
    cout << "sizeof(int)    = " << sizeof(int) << " bytes\n";
    return 0;
}
