#include <iostream>
#include "Queue.h"
using namespace std;

Queue::Queue() {
    tail = nullptr;

}

void Queue::enqueue_tail(const Data& object) {
    if (tail == nullptr) {
        tail = new Node(object);
        head = tail;

    }
    else {
        tail->next = new Node(object);
        tail = tail->next;

    }

}

bool Queue::dequeue_head() {
    if (head == nullptr) {
        return false;

    }
    else if (head == tail) {
        delete head;
        head = nullptr;
        tail = nullptr;
        return false;

    }

    else {
        Node* n = tail;
        if (tail->next == nullptr) {
            tail = head;

        }
        else {
            tail = tail->next;
            return false;

        }
        delete n;
        return true;

    }

}
