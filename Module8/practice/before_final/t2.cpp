#include <iostream>

// add element forward
int main () {
    struct Node {
        int info;
        Node * next;
    };

    Node * head = NULL;
    Node * tail = NULL;

    Node * p = new Node;
    p -> info = 23;
    p -> next = NULL;

    head = p;
    tail = p;

    Node * q = new Node;
    q -> info = 38;
    q -> next = NULL;

    tail -> next = q;
    tail = q;
    

    Node * current = head;
    while (current != NULL) {
        std::cout << current -> info << " ";
        current = current -> next;
    }
    return 0;
}