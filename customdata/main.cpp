#include <iostream>
#include "Circle.h"
#include "Cube.h"
using namespace std;

enum Days {Mon, Tue, Wed, Thu, Fri};

union Weight {
    float tons;
    int pounds;
    long ounces;
} elephant;

struct movie {
    int year;
    string title;
    bool wonOscar;
} SwissArmyMan;

struct buddy {
    movie favMovie;
    string name;
};

struct {
    string title;
    string band;
    int year;
} TurnDownForWhat;



class Line {
public:
    double len;
    Line(double l) : len(l) {}
    Line operator+(const Line rhs) {
        return Line(this->len + rhs.len);
    }
};

int main() {
    //region Old
    int x(6);
    Circle circ;
    Rectangle rect{6, 7};
    cout << rect.height << endl;

    movie EEAAO;
    EEAAO.wonOscar = true;
    EEAAO.title = "Everything Everywhere...";

    movie * m1 = &EEAAO;

    cout << "Title: " << (*m1).title << "\n";
    cout << "Title: " << m1->title << "\n";

    SwissArmyMan.wonOscar = false;

    TurnDownForWhat.title = "Turn Down For What";
    TurnDownForWhat.band = "Lil Jon";

    Days currentDay = Days::Tue;

    currentDay = (Days)(currentDay + 1);
    cout << "Happy " << currentDay << endl;
    switch (currentDay) {
        case Days::Mon:
            cout << "Monday";
            break;
        case Days::Tue:
            cout << "Tue";
            break;
        case Days::Wed:
            cout << "Wednesday";
            break;
        default:
            cout << "Actually don't talk to me.";
    }
    buddy parker;
    parker.name = "Parker";
    parker.favMovie.title = "Marvel Slop";

    elephant.tons = 6.5;
    elephant.pounds = 13000;
    elephant.ounces = 13000 * 16;

    cout << "\n" << elephant.ounces << "\n";

    int i, j, k;
    for (int i = 0; i < 10; i++) {

    }
    cout << i << endl;

    //endregion
    Line l1(5);
    Line l2(9);
    cout << (l1 + l2).len << endl;
}