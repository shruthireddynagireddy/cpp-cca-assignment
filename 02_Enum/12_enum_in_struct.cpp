// Enum used as a member of a struct
#include <iostream>
#include <string>
using namespace std;

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    string name;
    int age;
    Gender gender;
};

int main() {
    Person p = {"Rahul", 20, MALE};
    cout << "Name: " << p.name << "\nAge: " << p.age << "\nGender code: " << p.gender << endl;
    return 0;
}
