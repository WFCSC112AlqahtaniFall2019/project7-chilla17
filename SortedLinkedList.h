#ifndef PROJECT7_SORTEDLINKEDLIST_H
#define PROJECT7_SORTEDLINKEDLIST_H
#include <iostream>
#include "LinkedList.h"
using namespace std;


class SortedLinkedList : public LinkedList {
public:
    void insertSorted(Data& object);
};


#endif //PROJECT7_SORTEDLINKEDLIST_H
