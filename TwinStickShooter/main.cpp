#include <iostream>
using namespace std;

void printGrid(char grid[], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << grid[cols * i + j] << " ";
        }
        cout << endl;
    }
    grid[0] = '1';
}

int main() {
    char move;
    int rows = 3, cols = 4;
    char grid[rows * cols];

    int playerPos = 1 * cols + 2;
    for (int i = 0; i < rows * cols; i++) {
        grid[i] = '0';
    }
    grid[playerPos] = 'X';
    do {

        printGrid(grid, rows, cols);

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
                playerPos -= cols;
                grid[playerPos] = 'X';
                break;
            case 's':
                grid[playerPos] = '0';
                playerPos += cols;
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