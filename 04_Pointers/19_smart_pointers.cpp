// Smart pointers (C++11)
#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int> u = make_unique<int>(10);
    cout << "unique_ptr value = " << *u << endl;

    shared_ptr<int> s1 = make_shared<int>(20);
    shared_ptr<int> s2 = s1;
    cout << "shared_ptr value = " << *s2 << endl;
    cout << "use_count = " << s1.use_count() << endl;
    return 0;   // memory freed automatically
}
