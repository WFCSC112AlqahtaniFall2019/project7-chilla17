#include <iostream>
#include <fstream>
#include "Queue.h"
#include "Stack.h"
#include "Data.h"
#include "SortedLinkedList.h"
#include "LinkedList.h"
using namespace std;

int main() {
    ifstream in;
    ofstream out;
    string firstName;
    string lastName;
    string name = firstName + " " + lastName;
    int height;
    int weight;
    double dash;
    int bench;
    Stack* newData = new Stack();
    Queue* queueData = new Queue();
    SortedLinkedList list;

    in.open(".../2019_nfl_combine_results.csv");
    if(!in.is_open()) {
        cout << "Could not open file 2019_nfl_combine_results.csv" << endl;
        return 1;

    }

}