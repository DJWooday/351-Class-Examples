#include <iostream>
#include "Circle.h"
#include "Cube.h"
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


int main() {
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
}
