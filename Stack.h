#ifndef PROJECT7_STACK_H
#define PROJECT7_STACK_H
#include <iostream>
#include "LinkedList.h"
using namespace std;

class Stack : public LinkedList { // inherit LinkedList class
public:
    Stack(); // default constructor
    void push_head(const Data& item); // member public function
    bool pop_head(); // member public function
};


#endif //PROJECT7_STACK_H
