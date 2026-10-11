// Menu-driven program using enum
#include <iostream>
using namespace std;

enum Choice { ADD = 1, SUBTRACT, MULTIPLY, DIVIDE, EXIT };

int main() {
    int a = 20, b = 5;
    for (int c = ADD; c <= EXIT; c++) {
        switch (c) {
            case ADD:      cout << "Add: " << a + b << endl; break;
            case SUBTRACT: cout << "Subtract: " << a - b << endl; break;
            case MULTIPLY: cout << "Multiply: " << a * b << endl; break;
            case DIVIDE:   cout << "Divide: " << a / b << endl; break;
            case EXIT:     cout << "Exit\n"; break;
        }
    }
    return 0;
}
