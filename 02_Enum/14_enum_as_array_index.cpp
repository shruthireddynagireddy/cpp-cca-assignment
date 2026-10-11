// Using enum values as array indices
#include <iostream>
using namespace std;

enum Subject { MATHS, PHYSICS, CHEMISTRY, ENGLISH, NUM_SUBJECTS };

int main() {
    int marks[NUM_SUBJECTS];
    marks[MATHS] = 90;
    marks[PHYSICS] = 85;
    marks[CHEMISTRY] = 78;
    marks[ENGLISH] = 88;
    int total = 0;
    for (int i = 0; i < NUM_SUBJECTS; i++) total += marks[i];
    cout << "Maths marks: " << marks[MATHS] << endl;
    cout << "Total = " << total << ", Average = " << total / (double)NUM_SUBJECTS << endl;
    return 0;
}
