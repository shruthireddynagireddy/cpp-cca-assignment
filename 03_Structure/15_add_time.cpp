// Add two times (hours, minutes, seconds)
#include <iostream>
using namespace std;

struct Time { int h, m, s; };

Time add(Time a, Time b) {
    Time r;
    int total = (a.h + b.h) * 3600 + (a.m + b.m) * 60 + a.s + b.s;
    r.h = total / 3600;
    r.m = (total % 3600) / 60;
    r.s = total % 60;
    return r;
}

int main() {
    Time t1 = {2, 45, 50}, t2 = {1, 30, 40};
    Time t = add(t1, t2);
    cout << "Total time = " << t.h << "h " << t.m << "m " << t.s << "s" << endl;
    return 0;
}
