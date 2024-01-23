#include <iostream>
#include <fstream>
#include <iomanip>


using namespace std;

int main() {

    ifstream inFile;
    ofstream outFile;

    string firstName, lastName;
    double updatedSalary, payIncrease;


    inFile.open("datain.txt");
    outFile.open("dataout.txt");

    inFile >> firstName >> lastName >> updatedSalary >> payIncrease;
    outFile << setprecision(2) << fixed ;
    outFile << "Name " << firstName << " " << lastName << "   "<< "Salary  " << (updatedSalary * ((payIncrease)/100)) << endl;
    inFile >> firstName >> lastName >> updatedSalary >> payIncrease;
    outFile << "Name " << firstName << " " << lastName << "   "<< "Salary  " << (updatedSalary * ((payIncrease)/100)) << endl;
    inFile >> firstName >> lastName >> updatedSalary >> payIncrease;
    outFile << "Name " << firstName << " " << lastName << "   "<< "Salary  " << (updatedSalary * ((payIncrease)/100)) << endl;
    inFile.close();
    outFile.close();
    return 0;
}