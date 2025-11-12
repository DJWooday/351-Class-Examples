#include <iostream>
#include "Circle.h"
#include "Cube.h"
#include <fstream>
using namespace std;

enum Day {Mon=10, Tue=20, Wed=30, Thu, Fri, Blo=15};

struct movie {
    string title;
    int year;
    bool wonOscar;
} EEAAO;

struct buddy {
    string name;
    movie fav;
};

struct {
    string title;
    string band;
    int year;
} TurnDownForWhat;

union weight {
    float tons;
    int pounds;
    long ounces;
};

class Line {
public:
    double len;
    static int count;

    explicit Line(double l) {

    len = l;
    count = count + 1;}

    Line operator+(const Line rhs) {
        return Line(this->len + rhs.len);
    }
    Line& operator+= (const Line rhs) {
        this->len += rhs.len;
        return *this;
    }
    friend Line operator-(Line l1, Line l2);

    friend ostream& operator<<(ostream& lhs, Line& rhs) {
        lhs << "Line: " << rhs.len;
        return lhs;
    }

    static void PrintLineLen(int i) {
        cout << i << endl;
    }
};

Line operator-(Line l1, Line l2) {
    return Line(l1.len - l2.len);
}



int main() {
    //region Structs
    Rectangle rect{6, 7};
    Rectangle* rectptr;
    cout << rect.get_area() << endl;

    //int i = 0;

    Day currentDay = Tue;
    currentDay = (Day)(currentDay + 1);
    cout << "Happy " << currentDay << endl;
    switch (currentDay) {
        case Mon:
            cout << "Monday" << endl;
            break;
        case Tue:
            cout << "Tue" << endl;
            break;
        case Wed:
            cout << "Wed" << endl;
            break;
        default:
            cout << "wut" << endl;
    }

    EEAAO.wonOscar = true;
    movie SwissArmyMan;
    SwissArmyMan.title = "Swiss Army Man";
    SwissArmyMan.year = 2015;

    movie * mov = &SwissArmyMan;

    cout << SwissArmyMan.title << endl;
    cout << mov->title << endl;
    cout << sizeof(movie) << endl;

    TurnDownForWhat.title = "Turn Down For What";
    TurnDownForWhat.year = 2012;
    TurnDownForWhat.band = "Lil Jon";

    buddy mybud;
    mybud.name = "Buddy";
    mybud.fav.year = 1963;

    weight elephant;
    elephant.tons = 6.5;
    elephant.pounds = 13000;
    elephant.ounces = 13000 * 6;

    cout << sizeof(elephant) << endl;

    int i, j, k;
    for (int i = 0; i < 10; i++) {

    }
    cout << i << endl;
    //endregion


    Sphere s0(5);
    Sphere s1(s0);
    Sphere s2;
    s2 = s0;
    cout << s2.radius << endl;

    Line l1(4);
    Line l2(6);
    Line l3 = l1 + l2;
    l3 += l3;
    cout << l3.count << endl;

    ofstream output;
    output.open("scores.txt");
    output << "Dell Savage 99.8" << endl;
    output.close();

    ifstream input;
    string fname, lname;
    double score;
    string temp;
    input.open("scores.txt");
    if (input.fail()) return 12;
    getline(input, temp);
    cout << temp << endl;
    input.close();
}
