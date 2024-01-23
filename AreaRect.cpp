#include <iostream>

using namespace std;

int main(){
    double length, width, perimeter, area;
    cout << "Length ";
    cin >> length;
    cout << "Width ";
    cin >> width;
    
    perimeter = (2*length) + (2*width);
    area = length * width;

    cout << "The following perimeter is " << perimeter << " units\n";
    cout << "The following area is " << area << " units";
    return 0;
}