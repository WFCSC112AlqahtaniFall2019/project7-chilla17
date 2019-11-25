#include <iostream>
#include "Data.h"
using namespace std;

Data::Data() {
    playerName = "";
    height = 0;
    weight = 0;
    dash = 0;
    bench = 0;
}

// at least 4 data members, match data attributes in data set
Data::Data(string pN, int h, int w, double d, int b) {
    playerName = pN;
    height = h;
    weight = w;
    dash = d;
    bench = b;

}

// overload comparison operator, height will be comparison attribute
bool Data::operator< (const Data& rhs) {
    return this->height < rhs.height;

}

// overload output stream operator, will be used to print
ostream& operator<< (ostream& out, const Data& print) {
    out << "Player name: " << print.playerName << endl << "Height: " << print.height << endl << "Weight: " << print.weight << endl << "40 yard dash: " << print.dash << endl << "Bench press: " << print.bench << endl;
    return out;

}

