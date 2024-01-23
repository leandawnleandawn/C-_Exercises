#include <iostream>
#include <iomanip>
#include <fstream>

int main (){
	std::ofstream outFile;
	double loanAmount, annualinterestRate, monthlyPayment, durationPayment, monthlyInterstRate, monthlypay;


	outFile.open("output.txt");

	std::cout << std::setprecision(2) << std::fixed;
	std::cout << "The Loan Amount: ";
	std::cin >> loanAmount;
	std::cout << "Annual Interest Rate: ";
	std::cin >> annualinterestRate;
	std::cout << "Monthly Payment: ";
	std::cin >> monthlyPayment;


	

	monthlyInterstRate = (annualinterestRate / (100.0* 12.0));
	monthlypay = loanAmount;
	durationPayment = 0.0;

	while(monthlypay >= 0.0){
		std::cout << "Month " << durationPayment << " : "<< monthlypay << std::endl;
		monthlypay *= (1 + monthlyInterstRate);
		monthlypay -=monthlyPayment;
		durationPayment++;
	}

	outFile << "************************************" << std::endl;
	outFile << std::left << "Amount of Loan: " << std::setfill('*') << std::setw(10) << std::right << std::setfill(' ') << std::setw(10) << loanAmount << std::endl;
	outFile << std::left << "Interest Rate: " << std::setfill('*') << std::setw(10) << std::right << std::setfill(' ') << std::setw(10)  << annualinterestRate << std::endl;
	outFile << std::left << "Monthly Pay" << std::setfill('*') << std::setw(10) << std::right << std::setfill(' ') << std::setw(10)  << monthlyPayment << std::endl;
	outFile << "It takes " << durationPayment << " month/s to complete your payment" << std::endl;

	outFile.close();
	return 0;
}