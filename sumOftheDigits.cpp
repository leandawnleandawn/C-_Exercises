#include <iostream>
#include <cmath>

using namespace std;

int main (){

    int number, digit;
    string digitize;
    cin >> number;

    for (int i = 0; i < trunc(log10(number)) + 1; i++){
        cout << trunc(number / pow(10, trunc(log10(number)) - i)) << " ";
        
    }



    while (number > 0){

        digit = number % 10;
        number /= 10;
        cout << digit << " ";

    }
    return 0;
}