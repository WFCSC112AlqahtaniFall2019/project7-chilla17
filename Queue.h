#ifndef PROJECT7_QUEUE_H
#define PROJECT7_QUEUE_H
#include <iostream>
#include "LinkedList.h"


class Queue : public LinkedList { // inherit LinkedList class
public:
    Queue(); // default constructor

    void enqueue_tail(const Data& object); // member public function
    bool dequeue_head(); // member public function

private:
    Node* tail; // private Node* tail
};


#endif //PROJECT7_QUEUE_H
