#include <iostream>
#include <sstream>
using namespace std;

int main() {
    /*
    float payRate, taxRate;
    int numHours;
    cout << "Enter payrate, numHours, then taxRate: ";
    cin >> payRate >> numHours >> taxRate;

    cin.ignore(100000, '\n');
    string name;
    cout << "Oh yeah, what's your name? ";
    cin >> name;

    cout << name << ", you made: " << payRate * numHours * (1-taxRate) << endl;
    */

    /*
    cout << "Welcome to Taco Bell, can I take your order?\n->";
    string order;
    getline(cin, order);
    cout << "You wanted: " << order << ", right?" << endl;
    */

    int month, day, year;
    string buffer;
    cout << "Enter your birthday to sign up for TBell Rewards:\nFormat: MM/DD/YYYY ->";
    getline(cin, buffer);

    stringstream ss = stringstream(buffer);
    string temp;
    getline(ss, temp, '/');
    stringstream(temp) >> month;
    getline(ss, temp, '/');
    stringstream(temp) >> day;
    getline(ss, temp);
    stringstream(temp) >> year;

    cout << "your bday is " << month << '/' << day << '/' << year << endl;
}