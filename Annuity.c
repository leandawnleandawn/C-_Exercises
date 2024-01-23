#include <iostream>
#include <cmath>

double annuity(double presentValue, double interestRate, double Payment);


int main(){
	
	double loanAmount, interestRate, noPayments;

	std::cout << "Amount of Loan To Pay: ";
	std::cin >> loanAmount;
	std::cout << "Interest Rate: ";
	std::cin >> interestRate;
	std::cout << "No of Payments: ";
	std::cin >> noPayments;

	std::cout << "Annuity: " << annuity(loanAmount, interestRate, noPayments);
	return 0;
}

double annuity(double presentValue, double interestRate, double Payment){

	return (presentValue*(interestRate/1200.0))/(1.0-pow((1.0+(interestRate/1200.0)), (-Payment*12.0)));
}



