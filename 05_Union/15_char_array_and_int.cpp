// Union of a char array and an integer
#include <iostream>
using namespace std;

union Word {
    char text[4];
    int number;
};

int main() {
    Word w;
    w.text[0] = 'A'; w.text[1] = 'B'; w.text[2] = 'C'; w.text[3] = '\0';
    cout << "As text   : " << w.text << endl;
    cout << "As integer: " << w.number << endl;
    return 0;
}
