// Add two complex numbers using structures
#include <iostream>
using namespace std;

struct Complex { double real, imag; };

Complex add(Complex a, Complex b) { return {a.real + b.real, a.imag + b.imag}; }

int main() {
    Complex a = {3, 4}, b = {1, 2};
    Complex c = add(a, b);
    cout << "Sum = " << c.real << " + " << c.imag << "i" << endl;
    return 0;
}
