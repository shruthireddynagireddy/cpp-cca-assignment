// Unions can have member functions in C++
#include <iostream>
using namespace std;

union Number {
    int i;
    float f;

    void setInt(int x)     { i = x; }
    void setFloat(float x) { f = x; }
    void showInt()   { cout << "int: " << i << endl; }
    void showFloat() { cout << "float: " << f << endl; }
};

int main() {
    Number n;
    n.setInt(10);   n.showInt();
    n.setFloat(1.5f); n.showFloat();
    return 0;
}
