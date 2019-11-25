#ifndef PROJECT7_DATA_H
#define PROJECT7_DATA_H
#include <iostream>
using namespace std;


class Data {
public:
    // default constructor
    Data();

    // alternate constructor
    Data(string pN, int h, int w, double d, int b);

    friend ostream& operator<<(ostream &out, const Data& print);
    bool operator< (const Data& rhs);

protected:
    string playerName;
    int height;
    int weight;
    double dash;
    int bench;

};


#endif //PROJECT7_DATA_H
