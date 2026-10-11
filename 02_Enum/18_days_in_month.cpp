// Days in month using enum
#include <iostream>
using namespace std;

enum Month { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int daysInMonth(Month m, bool leap) {
    switch (m) {
        case FEB: return leap ? 29 : 28;
        case APR: case JUN: case SEP: case NOV: return 30;
        default: return 31;
    }
}

int main() {
    cout << "February (non-leap): " << daysInMonth(FEB, false) << endl;
    cout << "February (leap)    : " << daysInMonth(FEB, true) << endl;
    cout << "April              : " << daysInMonth(APR, false) << endl;
    cout << "December           : " << daysInMonth(DEC, false) << endl;
    return 0;
}
