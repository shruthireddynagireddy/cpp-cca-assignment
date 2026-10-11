// Pointer to a structure (-> operator)
#include <iostream>
using namespace std;

struct Book { int id; float price; };

int main() {
    Book b = {101, 499.50};
    Book* p = &b;
    cout << "ID: " << p->id << ", Price: " << p->price << endl;
    p->price = 550.0;
    cout << "Updated price: " << b.price << endl;
    return 0;
}
