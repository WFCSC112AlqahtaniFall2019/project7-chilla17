#include <iostream>
#include "Stack.h"
using namespace std;

void Stack::push_head(const Data& data) {
    if (head == nullptr) {
        head = new Node(data);

    }

    else {
        Node* current = new Node(data); // create new node
        current->next = head; // points to head
        head = current; // head is new node

    }

}

bool Stack::pop_head() {
    if (head == nullptr) {
        return  false;

    }

    else {
        Node* previous = head;
        head = head->next;
        previous->next = nullptr;
        delete previous;
        return true;
    }

}

Stack::Stack() = default;