#include <iostream>
#include <cmath>
using namespace std;

int main() {
    /*
    int health;
    cin >> health;

    if (health > 50 )
        cout << "green";
    if (health <=50 && health++ > 25)
        cout << "yellow";
    if (health <= 25) cout << "red";

    cout << health;
    return 0;
    */

    /*
    float xpos = 5.5;
    float landMinePos = 10.9;
    while (true) {
        cout << xpos << endl;
        xpos += .1;
        if (fabs(xpos-landMinePos) < 0.01) {
            cout << "Kaboom" << endl;
            break;
        }

        if (xpos > 15) break;
    }
    */

    /*
    char input;
    cin >> input;

    switch (input) {
        case 'w':
        case 'W':
            cout << "Move Up" << endl;
            break;
        case 'a':
            cout << "Move Left" << endl;
            break;
        case 's':
            cout << "Move Down" << endl;
            break;
        default:
            cout << "Invalid Input" << endl;
    }

    bool alive;
    int health;
    if (health <= 0) alive = false;
    else if (health > 0) alive = true;

    health <= 0 ? alive = false : alive = true;
    alive = health > 0;
    */

    /*
    string name = "Jason";
    for (int count = 0; count < name.length(); count++) {
        cout << name[count] << endl;
    }
    */

    /*
    int health;
    cin >> health;

    if (health > 50) cout << "Green";
    else if (health > 25 && health++ <= 50) cout << "Yellow";
    else  cout << "Red";
    */

    /*
    float xpos = 5.5;
    float landMindPos = 10.9;

    while (true) {
        xpos += .1;
        cout << xpos << endl;

        if (fabs(xpos - landMindPos) < 0.01) {
            cout << fixed << "Kaboom" << endl;
            break;
        }

        if (xpos > 15)
            break;
    }
    */

    /*
    char input;
    cin >> input;

    switch (input) {
        case 'w':
        case 'W':
            cout << "Up" << endl;
            break;
        case 's':
            cout << "Down" << endl;
            break;
        default:
            cout << "Invalid" << endl;
    }
    */
    /*
    bool alive;
    int health;
    cin >> health;
    //if (health < 0) alive = false;
    //else alive = true;
    (health > 0) ? alive = true : alive = false;
    alive = health > 0;
    alive = health;
    */
    /*
    string name = "Jason";
    for (int i = 0; i < name.length(); i++) {
        cout << name[i] << " ";
    }
    */

    char input;

    bool cont = true;
    do {

        cin >> input;
        switch (input) {
            case 'w':
                cout << "up" << endl;
                break;
            case 's':
                cout << "down" << endl;
                break;
            case 'k':
                continue;
        }
        if (input == 'q') break;

        // Stuff to process input

    } while (true);
}