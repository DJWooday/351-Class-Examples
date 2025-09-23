#include <iostream>
#include <cmath>

using namespace std;

std::string concat(std::string &a, std::string &b);
void odd(int y);
void even(int x);

float distance(float x1, float y1, float x2, float y2);
float distance(float p1[], float p2[]);

float& max(float& x, float& y);

template <typename swappable>
void swapThese(swappable &, swappable &);

template <typename Student, typename TestScore>
auto Sum(Student s, TestScore t);

int main() {
    int x=10, y=20;
    std::cout << &x << " " << &y << std::endl;
    swap(x, y);
    std::cout << &x << " " << &y+1 << std::endl;

    int x1 = 10, y1 = 20;
    int x2 = 0, y2 = 0;
    cout << distance(x1, y1, x2, y2) << std::endl;
    int p1[] = {x1, y1};
    int p2[] = {x2, y2};

    cout << distance(p1, p2) << std::endl;

    float a = 10, b = 20;
    float& alias = max(a, b);
    alias++;
    cout << alias << " " << b << std::endl;

    const int rows = 3, cols = 4;
    char grid[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            grid[i][j] = '0';
        }
    }
    char (&midRow)[cols] = grid[rows / 2];
    midRow[1] = '1';

    int grades[] = {74, 66, 82, 91};
    for (int& grade : grades) {
        grade += 10;
    }
    for (int grade : grades) {
        cout << grade << " ";
    }
    cout << endl;

    int swapA = 15, swapB = 30;
    swapThese(swapA, swapB);
    cout << swapA << " " << swapB << std::endl;

    double swapC = 3.15, swapD = 7.5;
    swapThese(swapC, swapD);
    cout << swapC << " " << swapD << std::endl;

    string str1 = "Hey", str2 = "There";
    swapThese(str1, str2);
    cout << str1 << " " << str2 << std::endl;

    int stud = 90;
    float test = 10;
    //cout << Sum(3, 5) << endl;

    return 0;
}

float& max(float& x, float& y) {
    return y > x ? y : x;
}

float distance(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1 , 2) + pow(y2 - y1 , 2));
}
float distance(float p1[], float p2[]) {
    return sqrt(pow(p2[0] - p1[0] , 2) + pow(p2[1] - p1[1] , 2));
}

std::string concat(const std::string & a, const std::string& b) {
    return a + b;
}

void even(int x)
{
    if ((x % 2) == 0) cout << "Even";
    else odd(x);
}
void odd(int y)
{
    if ((y % 2) != 0) cout << "Odd";
    else even(y);
}

template <typename swappable>
void swapThese(swappable &a, swappable &b) {
    swappable temp;
    temp = a;
    a = b;
    b = temp;
}

template <typename Student, typename TestScore>
auto Sum(Student s, TestScore t) {
    cout << s + t << endl;
}