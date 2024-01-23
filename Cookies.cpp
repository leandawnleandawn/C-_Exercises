#include <iostream>

using namespace std;

int main(){
    double totalCookies, cookiesInBox, cookiesboxInContainer;
    double numberofContainers, numberofBoxes, excessBoxes, excessContainers;

    cout << "Total Number of Cookies: ";
    cin >> totalCookies;
    cout << "Total Cookies in a Box: ";
    cin >> cookiesInBox;
    cout << "Total Cookie Box in a Container";
    cin >> cookiesboxInContainer;

    numberofBoxes = totalCookies / cookiesInBox;
    excessBoxes = (numberofBoxes - static_cast<int>(numberofBoxes)) * cookiesInBox;
    numberofContainers = static_cast<int>(numberofBoxes) / cookiesboxInContainer;
    excessContainers = (numberofContainers - static_cast<int>(numberofContainers)) * cookiesboxInContainer;

    if (excessBoxes < cookiesInBox){
        cout << "Dispensing out " << excessBoxes << " of cookies"<< endl;
    }
    if (excessContainers < cookiesboxInContainer){
        cout << "Dispensing out " << excessBoxes << " of cookie boxes"<< endl;
    }

    cout << "Delivering " << static_cast<int>(numberofContainers) << " containers with " << static_cast<int>(numberofBoxes) <<" cookie boxes" << endl;



    return 0;
}