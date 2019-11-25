#include <iostream>
#include "Stack.h"
using namespace std;

// takes in data object, creates node pointer, inserts into stack at head
void Stack::push_head(const Data& data) {
    // if list is empty, data becomes the head
    if (head == nullptr) {
        head = new Node(data); // head is the new node

    }

    // if list not empty
    else {
        Node* current = new Node(data); // create new node current
        current->next = head; // current points to head
        head = current; // current is new head

    }

}

// removes data object pointed to by head, returns true if list not empty, returns false if list empty
bool Stack::pop_head() {
    // if list empty
    if (head == nullptr) {
        return  false; // false

    }

    // otherwise, list not empty
    else {
        Node* previous = head; // previous = head
        head = head->next; // new head is second node
        previous->next = nullptr; // disconnect previous
        delete previous; // delete previous
        return true; // return true
    }

}

Stack::Stack() = default; // default constructor