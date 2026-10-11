// Looping through all enum values
#include <iostream>
using namespace std;

enum Season { SPRING, SUMMER, AUTUMN, WINTER, SEASON_COUNT };

const char* names[] = {"Spring", "Summer", "Autumn", "Winter"};

int main() {
    for (int s = SPRING; s < SEASON_COUNT; s++)
        cout << s << " -> " << names[s] << endl;
    return 0;
}
