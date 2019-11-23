#ifndef PROJECT7_QUEUE_H
#define PROJECT7_QUEUE_H
#include <iostream>
#include "LinkedList.h"


class Queue : public LinkedList {
public:
    Queue();

    void enqueue_tail(const Data& object);
    bool dequeue_head();

private:
    Node* tail;
};


#endif //PROJECT7_QUEUE_H
