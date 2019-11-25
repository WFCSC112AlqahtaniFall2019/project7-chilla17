#include <iostream>
#include "Data.h"
#include "SortedLinkedList.h"
using namespace std;

// create Node pointer, inserts into SortedLinkedList at correct position determined by comparison operators in Data class
void SortedLinkedList::insertSorted(const Data &object) {
    Node* insert = new Node(object); // new node created called insert (i.e. object to be inserted)

    // if list empty
    if (head == nullptr) {
        head = insert; // insert become head of list
        return;

    }

    // if insert < head (i.e. needs to be inserted before the head)
    if (insert->data < head->data) {
        insert->next = head;
        head = insert;
        return;

    }

    // find place
    Node* current = head->next; // current at second node
    Node* previous = head; // previous at head
    while (current != nullptr && current->data < insert->data) {
        previous = current; // iterate
        current = current->next; // iterate

    }

    // connect insert
    insert->next = current;
    previous->next = insert;

    return;

}