// Function that takes and returns an enum
#include <iostream>
using namespace std;

enum Grade { FAIL, PASS, MERIT, DISTINCTION };

Grade getGrade(int marks) {
    if (marks >= 75) return DISTINCTION;
    if (marks >= 60) return MERIT;
    if (marks >= 40) return PASS;
    return FAIL;
}

int main() {
    int marks[] = {85, 65, 45, 20};
    for (int m : marks)
        cout << "Marks " << m << " -> grade code " << getGrade(m) << endl;
    return 0;
}
