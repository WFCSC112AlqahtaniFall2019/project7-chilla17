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
    string name;
    string height;
    string weight;
    string dash;
    string bench;
    Stack* stackData = new Stack();
    Queue* queueData = new Queue();
    SortedLinkedList list;

    in.open("../2019_nfl_combine_results.csv");
    if(!in.is_open()) {
        cout << "Could not open file 2019_nfl_combine_results.csv" << endl;
        return 1;

    }

    out.open("../stacked.txt");
    if(!out.is_open()) {
        cout << "Could not open stacked.txt" << endl;
        return 1;
    }

    cout << "Reading 2019_nfl_combine_results.csv" << endl;
    while (!in.eof()) {
        getline(in, name, ',');
        getline(in, height, ',');
        getline(in, weight, ',');
        getline(in, dash, ',');
        getline(in, bench, '\n');
        int h = stoi(height);
        int w = stoi(weight);
        double d = stoi(dash);
        int b = stoi(bench);
        Data data(name, h, w, d, b);

        stackData->push_head(data);
        queueData->enqueue_tail(data);
        list.insertSorted(data);
    }
    in.close();

    cout << "Writing data in stack inserted at head into stacked.txt" << endl;
    stackData->print(out);
    while(stackData->pop_head()) {

    }
    out.close();

    out.open("../queued.txt");
    if(!out.is_open()) {
        cout << "Could not open queued.txt" << endl;
        return 1;

    }

    cout << "Writing data in queue inserted at tail into queued.txt" << endl;
    queueData->print(out);
    while(queueData->dequeue_head()) {

    }
    out.close();

    out.open("../sorted.txt");
    if(!out.is_open()) {
        cout << "Could not open sorted.txt" << endl;
        return 1;

    }

    cout << "Writing data in sorted linked list sorted by height into sorted.txt" << endl;
    list.print(out);
    out.close();

    return 0;

}