// Enum with user-defined values
#include <iostream>
using namespace std;

enum Level { LOW = 10, MEDIUM = 50, HIGH = 100 };
enum Mixed { A = 5, B, C, D = 20, E };   // B=6, C=7, E=21

int main() {
    cout << "LOW=" << LOW << " MEDIUM=" << MEDIUM << " HIGH=" << HIGH << endl;
    cout << "A=" << A << " B=" << B << " C=" << C << " D=" << D << " E=" << E << endl;
    return 0;
}
