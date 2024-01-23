#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

int main(){

    string movieName;
    double adultTicketPrice, childTicketPrice, donationPercent, grossPrice;
    int adultCount, childCount;


    cout << "MovieName: ";
    cin >> movieName;
    cout << "Adult Price: ";
    cin >> adultTicketPrice;
    cout << "Kid's Price: ";
    cin >> childTicketPrice;
    cout << "Quantity (Adult Kid): ";
    cin >> adultCount >> childCount;
    cout << "How much percent to donate? ";
    cin >> donationPercent;

    donationPercent /= 100;


    cout << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_" << endl;
    cout << setfill('-') << left << setw(63) << "Name of the Movie " << setfill(' ') << right << setw(10) << movieName << endl;
    cout << setfill('-') << left << setw(63) << "Price of Ticket for Adult: " << setfill(' ') << right << setw(10) << adultTicketPrice << endl;
    cout << setfill('-') << left << setw(63) << "Price of Ticket for Kids: " << setfill(' ') << right << setw(10) << childTicketPrice << endl;
    cout << setfill('-') << left << setw(63) << "Quantity of Adult: " << setfill(' ') << right << setw(10) << adultCount << endl;
    cout << setfill('-') << left << setw(63) << "Quantity of Child/ren: " << setfill(' ') << right << setw(10) << childCount << endl;
    cout << setfill('-') << left << setw(63) << "Percentage to Donate to Charity:  " << setfill(' ') << right << setw(10) << donationPercent << endl;
    cout << setfill('-') << left << setw(63) << "Amount to donate: " << setfill(' ') << right << setw(10) << donationPercent * ((static_cast<double>(adultCount) * adultTicketPrice) + (static_cast<double>(childCount) * childTicketPrice)) << endl;
    
    return 0;
}