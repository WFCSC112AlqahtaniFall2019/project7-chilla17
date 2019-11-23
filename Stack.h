#ifndef PROJECT7_STACK_H
#define PROJECT7_STACK_H
#include <iostream>
#include "LinkedList.h"
using namespace std;

class Stack : public LinkedList {
public:
    Stack();
    void push_head(const Data& item);
    bool pop_head();
};


#endif //PROJECT7_STACK_H
