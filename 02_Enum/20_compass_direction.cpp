// Rotate a compass direction using enum
#include <iostream>
using namespace std;

enum Direction { NORTH, EAST, SOUTH, WEST };

const char* dirName(Direction d) {
    const char* names[] = {"North", "East", "South", "West"};
    return names[d];
}

Direction turnRight(Direction d) { return static_cast<Direction>((d + 1) % 4); }
Direction turnLeft(Direction d)  { return static_cast<Direction>((d + 3) % 4); }

int main() {
    Direction d = NORTH;
    cout << "Facing " << dirName(d) << endl;
    d = turnRight(d); cout << "Turn right -> " << dirName(d) << endl;
    d = turnRight(d); cout << "Turn right -> " << dirName(d) << endl;
    d = turnLeft(d);  cout << "Turn left  -> " << dirName(d) << endl;
    return 0;
}
