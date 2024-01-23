#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main(){

    ifstream inFile;
    ofstream outFile;

    string firstName, lastName, proffesion;
    double grossSalary, monthlyBonus, taxes, paycheck, distanceTraveled, travelTime, numberofCoffeeCups, coffeeCupsCost, averageSpeed, salesAmount;

    inFile.open("inData.txt");
    outFile.open("outData.txt");

    outFile << fixed << setprecision(2); 
    inFile >> firstName >> lastName >> proffesion;
    outFile << "Name: " << firstName << " " << lastName << setfill(' ') << setw(20) << "Proffesion: " << proffesion << endl;
    cout << "Processing" << endl;

    inFile >> grossSalary >> monthlyBonus >> taxes;
    outFile << "Gross Salary: " << grossSalary << setfill(' ') << setw(20) << "Monthly Bonus: " << monthlyBonus << setfill(' ') << setw(20) << "Taxes: " << taxes << endl;
    outFile << "Net Salary: " << (grossSalary * taxes) + monthlyBonus << endl;
    cout << "Processing" << endl;

    inFile >> distanceTraveled >> travelTime;
    outFile << "Distance: " << distanceTraveled << " meters"  << setfill(' ') << setw(20) << "Travel Time: " << travelTime << " hours " << endl;
    outFile << "Speed: " << distanceTraveled / travelTime << endl;
    cout << "Processing" << endl;

    inFile >> numberofCoffeeCups >> coffeeCupsCost;
    outFile << "Coffee Cups: " << numberofCoffeeCups << setfill(' ') << setw(20) << "Price: " << coffeeCupsCost<< endl;
    outFile << "Total Net Income: " << numberofCoffeeCups * coffeeCupsCost << endl;
    cout << "Processing Complete... exiting" << endl;




    inFile.close();
    outFile.close();
    return 0;
}