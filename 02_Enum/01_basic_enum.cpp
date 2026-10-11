// Basic enum declaration and use
#include <iostream>
using namespace std;

enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    Day today = WEDNESDAY;
    cout << "Value of WEDNESDAY = " << today << endl;
    cout << "SUNDAY = " << SUNDAY << ", SATURDAY = " << SATURDAY << endl;
    return 0;
}
