// Passing a union to a function
#include <iostream>
using namespace std;

union Data {
    int i;
    float f;
};

void showInt(Data d)   { cout << "Integer: " << d.i << endl; }
void showFloat(Data d) { cout << "Float: " << d.f << endl; }

int main() {
    Data d;
    d.i = 55;
    showInt(d);
    d.f = 7.25f;
    showFloat(d);
    return 0;
}
