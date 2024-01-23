#include <iostream>

using namespace std;


int main (){

    const int SECRET = 11;
    const double RATE = 12.50;
    int num1, num2, newNum;
    string name;
    double hoursWorked, wages;

    cout << "First Integer: ";
    cin >> num1;
    cout << "Second Integer: ";
    cin >> num2;

    cout << "The first integer is " << num1 << " and the second integer is " << num2 << "." << endl;

    newNum = (num1 * 2) + num2;

    cout << "Your new number is " << newNum << endl;

    newNum += SECRET;

    cout << "Your new number is " << newNum << endl;

    cout << "Name: ";
    cin >> name;
    cout << "Hours Worked (0-70.0): ";
    cin >> hoursWorked;

    wages = hoursWorked * RATE;

    cout << "Hi, " << name << "! You have worked " << hoursWorked << " hours this week. Hence you will recieve " << wages << "." << endl;


    return 0;
}