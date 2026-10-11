// Find the employee with the highest salary
#include <iostream>
#include <string>
using namespace std;

struct Employee { string name; double salary; };

int main() {
    Employee e[] = {{"Arun", 45000}, {"Bina", 62000}, {"Chetan", 58000}, {"Deepa", 71000}};
    int best = 0;
    for (int i = 1; i < 4; i++)
        if (e[i].salary > e[best].salary) best = i;
    cout << "Highest paid: " << e[best].name << " (" << e[best].salary << ")" << endl;
    return 0;
}
