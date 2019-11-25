#include <iostream>
#include "Queue.h"
using namespace std;

// default constructor
Queue::Queue() {
    head = nullptr;
    tail = nullptr;

}

// takes in data object, create node pointer, inserts into queue at tail of list
void Queue::enqueue_tail(const Data& object) {
    // if list empty
    if (head == nullptr && tail == nullptr) {
        Node* newNode = new Node(object); // create data object newNode
        tail = newNode; // newNode is tail (also technically head)

    }
    // if list not empty
    else {
        tail->next = new Node(object); // tail points to new data object
        tail = tail->next; // new data object becomes tail

    }

}

// remove data object pointed to by head, return true if list not empty, false if list empty
bool Queue::dequeue_head() {
    // if list not empty
    if (head != nullptr) {
        Node* temp = head; // head called temp
        head = head->next; // head points to second node
        temp->next = nullptr; // disconnect temp
        delete temp; // delete temp (first node)
        return true; // true

    }

    else {
        return false; // false
    }

}
