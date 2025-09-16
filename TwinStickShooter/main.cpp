#include <iostream>
using namespace std;

#define ROWS 3
#define COLS 4

void printGrid(char grid[]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << grid[COLS * i + j] << " ";
        }
        cout << endl;
    }
}

int main() {
    char move;
    char grid[ROWS * COLS];

    int playerPos = 1 * COLS + 2;
    for (int i = 0; i < ROWS * COLS; i++) {
        grid[i] = '0';
    }
    grid[playerPos] = 'X';
    do {

        printGrid(grid);

        /*
        for (int i = 0; i < ROWS * COLS; i++) {
            if (i % COLS == 0) cout << "\n";
            cout << grid[i] << " ";
        }
        */
        //region Input
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
        //endregion

        move = input[0];

        // React to input
        switch (move) {
            case 'w':
                grid[playerPos] = '0';
                playerPos -= COLS;
                grid[playerPos] = 'X';
                break;
            case 's':
                grid[playerPos] = '0';
                playerPos += COLS;
                grid[playerPos] = 'X';
                break;
            case 'a':
                grid[playerPos] = '0';
                playerPos -= 1;
                grid[playerPos] = 'X';
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