#include <iostream>
#include <cmath>

using namespace std;

int main(){

    const double GRAVITATIONAL_CONST = 6.67E-8;
    double mass1, mass2, distance, force;

    cout << "Mass 1 (kg) -> ";
    cin >> mass1; 
    cout << "Mass 2 (kg) -> ";
    cin >> mass2;
    cout << "Distance Between Two Models (m) -> ";
    cin >> distance;

    force = GRAVITATIONAL_CONST*((mass1*mass2)/(pow(distance, 2)));

    cout << "Force: " << force << "N" << endl;
    return 0;
}