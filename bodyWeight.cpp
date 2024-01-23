#include <iostream>
#include <fstream>

using namespace std;


int main(){

    ofstream outFile;

    
    double bodyPercentage, bodyWeight, wristMeasurement, waistMeasurement, hipMeasurement, forearmMeasurement;
    double A1, A2, A3, A4, A5;
    char sex;

    outFile.open("outoutout.txt");

    cout << "Body Weight (in kgs): ";
    cin >> bodyWeight;
    cout << "Sex (M/F):";
    cin >> sex;

    if (sex == 'F' || sex == 'f'){
        cout << "List the following measurement in separated with whitespaces (wrist, waist, hip, forearm):";
        cin >> wristMeasurement >> waistMeasurement >> hipMeasurement >> forearmMeasurement;
        A1 = (bodyWeight * 0.732) + 8.987;
        A2 = wristMeasurement / 3.140;
        A3 = waistMeasurement * 0.157;
        A4 = hipMeasurement * 0.249;
        A5 = forearmMeasurement * 0.434;
        bodyPercentage = ((bodyWeight - (A1+A2-A3-A4+A5))/bodyWeight)*100;
    }

    if (sex == 'M' || sex == 'm'){
        cout << "List the following measurement in separated with whitespaces (wrist):";
        cin >> wristMeasurement;
        A1 = (bodyWeight * 1.082) + 94.42;
        A2 = wristMeasurement * 4.15;
        bodyPercentage = ((bodyWeight - (A1-A2))/bodyWeight)*100;
    }


    outFile << bodyPercentage;
    outFile.close();
    return 0;
}