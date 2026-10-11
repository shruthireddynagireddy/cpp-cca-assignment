// Simple singly linked list
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = nullptr;
    for (int i = 3; i >= 1; i--) {          // builds 1 -> 2 -> 3
        Node* n = new Node{i * 10, head};
        head = n;
    }
    cout << "List: ";
    for (Node* t = head; t != nullptr; t = t->next) cout << t->data << " -> ";
    cout << "NULL" << endl;

    while (head) {
        Node* t = head;
        head = head->next;
        delete t;
    }
    return 0;
}
