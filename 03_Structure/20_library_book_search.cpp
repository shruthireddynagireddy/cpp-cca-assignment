// Search a book in an array of structures
#include <iostream>
#include <string>
using namespace std;

struct Book { int id; string title; string author; };

int main() {
    Book lib[] = {
        {1, "C++ Primer", "Lippman"},
        {2, "The C++ Programming Language", "Stroustrup"},
        {3, "Effective C++", "Meyers"}
    };
    int searchId = 3;
    bool found = false;
    for (const Book& b : lib) {
        if (b.id == searchId) {
            cout << "Found: " << b.title << " by " << b.author << endl;
            found = true;
        }
    }
    if (!found) cout << "Book not found" << endl;
    return 0;
}
