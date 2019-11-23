#include <iostream>
#include "SortedLinkedList.h"
using namespace std;

void SortedLinkedList::insertSorted(Data &object) {
    Node* insert = new Node(object);

    if (head == nullptr) {
        head = insert;
        return;

    }

    if (insert->data < head->data) {
        insert->next = head;
        head = insert;
        return;

    }

    Node* current = head->next;
    Node* previous = head;
    while (current != nullptr && current->data < insert->data) {
        previous = current;
        current = current->next;

    }

    insert->next = current;
    previous->next = insert;

}