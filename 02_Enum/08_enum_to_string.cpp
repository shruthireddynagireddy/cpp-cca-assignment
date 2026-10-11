// Convert enum value to a string
#include <iostream>
#include <string>
using namespace std;

enum Day { MON, TUE, WED, THU, FRI, SAT, SUN };

string dayName(Day d) {
    switch (d) {
        case MON: return "Monday";
        case TUE: return "Tuesday";
        case WED: return "Wednesday";
        case THU: return "Thursday";
        case FRI: return "Friday";
        case SAT: return "Saturday";
        case SUN: return "Sunday";
    }
    return "Unknown";
}

int main() {
    Day d = FRI;
    cout << "Day: " << dayName(d) << endl;
    return 0;
}
