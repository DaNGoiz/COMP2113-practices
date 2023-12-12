#include <iostream>

// add element backward
int main () {
    struct Node {
        int info;
        Node * next;
    };

    Node * head = NULL;
    
    Node * p = new Node;
    p -> info = 89;
    p -> next = head;
    head = p;

    Node * q = new Node;
    q -> info = 62;
    q -> next = head;
    head = q;

    Node * current = head;
    while (current != NULL) {
        std::cout << current -> info << " ";
        current = current -> next;
    }
    return 0;
}