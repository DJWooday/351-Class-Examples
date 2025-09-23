#include <iostream>
#include <cmath>
using namespace std;

void swap(int &, int &);
bool even(int);
bool odd(int);
float distance(float x1, float y1, float x2, float y2);
float distance(float p1[2], float p2[2]);
double& max(double& a, double& b);

template <typename swappable>
void swapThese(swappable &, swappable &);

template <typename Student, typename TestScore>
auto Sum(Student a, TestScore b) {
    return a + b;
}

int main() {
    int a = 10, b = 20;

    std::cout << &a << " " << &b << std::endl;
    swap(a, b);
    std::cout << &a << " " << &b + 1 << std::endl;

    float x1 = 0, y1 = 0;
    float x2 = 10, y2 = 10;
    cout << distance(x1, y1, x2, y2) << std::endl;
    float p1[] = {x1, y1};
    float p2[] = {x2, y2};
    cout << distance(p1, p2) << std::endl;

    double x3 = 5, y3 = 14;
    double &alias = max(x3, y3);
    //double &alias = y3;
    alias++;
    cout << alias << " " << y3 << std::endl;

    const int COLS = 3, ROWS = 5;
    char grid[ROWS][COLS];
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            grid[i][j] = '0';
        }
    }
    char (&midRow)[COLS] = grid[2];

    midRow[1] = 'X';
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    int grades[4] = {77, 45, 78, 92};

    for (int& grade : grades) {
        grade += 10;
    }

    int swapA = 15, swapB = 30;
    swapThese(swapA, swapB);
    cout << swapA << " " << swapB << std::endl;

    double swapC = 3.15, swapD = 7.5;
    swapThese(swapC, swapD);
    cout << swapC << " " << swapD << std::endl;

    string str = "Hey", str2 = " There";
    cout << str << " " << str2 << std::endl;

    cout << fixed << Sum(3, 5) << endl;
    return 0;
}

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
    std::cout << "In function: " << x << " " << y << std::endl;
}

bool even(int a) {
    if (a % 2 == 0) {std::cout << "even" << std::endl; return true;}
    else odd(a);
}
bool odd(int a) {
    if (a % 2 == 1) {std::cout << "odd" << std::endl; return true;}
}

float distance(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1 , 2) + pow(y2 - y1 , 2));
}
float distance(float p1[2], float p2[2]) {
    return sqrt(pow(p2[0] - p1[0] , 2) + pow(p2[1] - p1[1] , 2));
}

double& max(double& a, double& b) {
    return a > b ? a : b;
}

template <typename swappable>
void swapThese(swappable &a, swappable &b) {
    swappable temp = a;
    a = b + 5;
    b = temp;
}