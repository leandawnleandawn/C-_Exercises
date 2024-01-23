#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int cusAccNum, numPrem, bssConnections, premchannel;
    char cusCode;
    double bpsfee, bssfee, premfee, totalFee;
    const double BILLPROCESSINGFEER = 4.50;
    const double BILLPROCESSINGFEEB = 15;
    const double BASICSERVICEFEER = 20.50;
    const double BASICSERVICEFEEB = 75.00;
    const double PREMIUMCHANNELRATER = 7.5;
    const double PREMIUMCHANNELRATEB = 50.0;


    cout << "____________________________________" << endl;
    cout << "Customer Account Number: ";
    cin >> cusAccNum;
    cout << "Customer Code: ";
    cin >> cusCode;
    cout << "Number of Basic Conenctions: ";
    cin >> bssConnections;
    cout << "Number of Premium Channel: ";
    cin >> premchannel;
    cout << "____________________________________" << endl;

    if (cusCode == 'R' || cusCode == 'r')
    {
        bpsfee =  BILLPROCESSINGFEER;
        bssfee = BASICSERVICEFEER;
        premfee =  premchannel * PREMIUMCHANNELRATER;
        totalFee = bpsfee + bssfee + premfee;
    }
    else if (cusCode == 'B' || cusCode == 'b')
    {
        bpsfee = BILLPROCESSINGFEEB;
        if(bssConnections >= 10){
            bssfee = BASICSERVICEFEEB;
        }
        bssfee = BASICSERVICEFEEB + (bssConnections * 5);
        premfee = PREMIUMCHANNELRATEB * premchannel;
        totalFee = bpsfee + bssfee + premfee;
    }
    else
    {
        cout << "Error Occured, Please put the following code:" << endl;
        return 1;
    }
    
    cout << fixed << setprecision(2);
    cout << "********************************" << endl;
    cout << setfill('*') << setw(20) << left << "Customer Account Number" << setfill(' ') << setw(15) << right << cusAccNum << endl;
    cout << setfill('*') << setw(20) << left << "Bill Processing Fee" << setfill(' ') << setw(15) << right << bpsfee << endl;
    cout << setfill('*') << setw(20) << left << "Basic Servicing Fee" << setfill(' ') << setw(15) << right << bssfee << endl;
    cout << setfill('*') << setw(20) << left << "Premium Channel Fee" << setfill(' ') << setw(15) << right << premfee << endl;
    cout << setfill('*') << setw(20) << left << "Total: " << setfill(' ') << setw(15) << right << totalFee << endl;
    return 0;
}