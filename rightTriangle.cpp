#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    double side1, side2, side3, hypotenuse;

    cout << "Input the following sides as following (leg1, leg2, hypotenuse): ";
    cin >> side1 >> side2 >> side3;

    hypotenuse =sqrt(pow(side1, 2) + pow(side2, 2));

    if (hypotenuse == side3){

        cout << "This is a Pythagorean Triple";
        return 0;
    }else{
        cout << "this is not a Pythagorean Triple.";
        return 1;
    }
}