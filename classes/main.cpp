#include <iostream>
#include <fstream>
using namespace std;
class Line {
public:
    double len;
    explicit Line(double l) : len(l) {}
    Line operator+(const Line rhs) {
        return Line(this->len + rhs.len);
    }
    friend Line operator*(const Line lhs, const Line rhs);
    friend ostream& operator <<(ostream& os, const Line& rhs) {
        os << rhs.len;
        return os;
    }
};

Line operator-(Line lhs, Line rhs) {
    return Line(lhs.len - rhs.len);
}

Line operator*(const Line lhs, const Line rhs) {
    return (Line(lhs.len * rhs.len));
}


int main() {
    Line l1(5);
    Line l2(9);
    cout << (l1 + l2).len << endl;
    cout << (l1 - l2).len << endl;
    cout << l1;

    ofstream of;
    of.open("scores.txt");
    of << "Paul Webre " << l2 << endl;
    of.close();

    ifstream ifs ("scores.txt");
    string temp;
    string fname, lname;
    double score;
    while (!ifs.eof()) {
        getline(ifs, temp);
        cout << temp << endl;;
    }
    ifs.close();
}