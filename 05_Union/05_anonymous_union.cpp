// Anonymous union inside a struct
#include <iostream>
using namespace std;

struct Value {
    int type;           // 0 = int, 1 = float
    union {
        int i;
        float f;
    };
};

int main() {
    Value v1; v1.type = 0; v1.i = 42;
    Value v2; v2.type = 1; v2.f = 2.5f;
    cout << "v1 (int)   : " << v1.i << endl;
    cout << "v2 (float) : " << v2.f << endl;
    return 0;
}
