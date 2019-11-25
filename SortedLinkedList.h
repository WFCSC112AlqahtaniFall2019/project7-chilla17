#ifndef PROJECT7_SORTEDLINKEDLIST_H
#define PROJECT7_SORTEDLINKEDLIST_H
#include <iostream>
#include "LinkedList.h"
#include "Data.h"
using namespace std;


class SortedLinkedList : public LinkedList { // inherit LinkedList class
public:
    void insertSorted(const Data& object); // member public function
};


#endif //PROJECT7_SORTEDLINKEDLIST_H
