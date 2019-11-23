#include <iostream>
#include "Data.h"
using namespace std;

bool Data::operator< (const Data& rhs) {
    return height < rhs.height;

}

ostream& operator<< (ostream& out, const Data& print) {
    out << "Player name: " << print.playerName << endl << "Height: " << print.height << endl << "Weight: " << print.weight << endl << "40 yard dash: " << print.dash << endl << "Bench press: " << print.bench << endl;
    return out;

}

Data::Data(string pN, int h, int w, double d, int b) {
    playerName = pN;
    height = h;
    weight = w;
    dash = d;
    bench = b;

}