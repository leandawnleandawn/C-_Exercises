#include <iostream>

using namespace std;

int main (){

    double baseSalary, noOfServiceYears, bonus, commission, subtotalSalary, totalSalary;
    cout << "What is your Base Salary? " << endl;
    cin >> baseSalary;
    cout << "How long did you service in this company? " << endl;
    cin >> noOfServiceYears;

    if (noOfServiceYears >= 5){
        bonus = noOfServiceYears * 10;
    }else{
        bonus = noOfServiceYears * 20;
    }

    subtotalSalary = baseSalary + bonus;

    if (subtotalSalary < 5000){
        if(subtotalSalary >= 5000 || subtotalSalary < 10000){
        commission = subtotalSalary * 0.03;
        }else{
        commission = subtotalSalary * 0.06;
    }
    }
    
    
    totalSalary = subtotalSalary + commission;


    cout << "The Following salary that you have is " << totalSalary << endl;

    return 0;
}