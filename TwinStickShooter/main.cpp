#include <iostream>
using namespace std;

int main() {
    char move;
    do {
        cout << "Enter input (wasd or jilk)\n->";
        string buffer;
        getline(cin, buffer);

        char input[buffer.length()];
        int inputIndex = 0;

        for (int i = 0; i < buffer.length(); i++) {
            //if (buffer[i] == 'w' or buffer[i] == 'j' or buffer[i] == 'k' or buffer[i] == 'l') {
                input[inputIndex] = buffer.at(i);
                inputIndex++;
            //}
            // Check input
        }
        move = input[0];

        // React to input
        switch (move) {
            case 'w':
                cout << "Up";
                break;
            case 's':
                cout << "Down";
                break;
            case 'a':
                cout << "Left";
                break;
            case 'd':
                cout << "Right";
                break;
            default:
                cout << "Invalid input";
                break;

        }
    } while (move != 'q');
}