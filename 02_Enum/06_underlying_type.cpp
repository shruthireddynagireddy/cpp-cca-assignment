// Specifying the underlying type of an enum
#include <iostream>
#include <cstdint>
using namespace std;

enum Small : uint8_t { S1 = 1, S2 = 2, S3 = 255 };
enum class Big : long long { X = 1000000000000LL };

int main() {
    cout << "sizeof(Small) = " << sizeof(Small) << " byte(s)\n";
    cout << "sizeof(Big)   = " << sizeof(Big) << " byte(s)\n";
    cout << "S3 = " << (int)S3 << endl;
    return 0;
}
