#include <iostream>
#include <iomanip>


void BuyCoffee(int& small, int& medium, int& large, char key, int& totalsmall, int& totalmedium, int& totallarge);
void CoffeeMenu(char& choice, char& select, int& small, int& medium, int&large, int& totals, int& totalm,int& totall);
void makeReceipt(int& small, int& medium, int& large);
void showTotalRev(int& small, int& medium, int& large);

int main(){
	int smallCounter, mediumCounter, largeCounter, totalSmallCounter, totalMediumCounter, totalLargeCounter;
	char choice, select1;

	smallCounter = 0;
	mediumCounter = 0;
	largeCounter = 0;

	totalSmallCounter = 0;
	totalMediumCounter = 0;
	totalLargeCounter = 0;
	do{
		if (choice == 'q'){
			std::cout << "Thank you for coming!" << "\n";
			break;
		}
		if (choice == 'M'){
			showTotalRev(totalSmallCounter, totalMediumCounter, totalLargeCounter);
		}
		std::cout << "*****************************" << "\n";
		std::cout << "[B] Buy Coffee " << "\n";
		std::cout << "[M] Show Money Made " << "\n";
		std::cout << "[q] Quit" << "\n";
		std::cout << "*****************************" << "\n";
		std::cin >> choice;
		CoffeeMenu(choice, select1, smallCounter, mediumCounter, largeCounter, totalSmallCounter, totalMediumCounter, totalLargeCounter);
		
	}while(true);
	return 0;
}


void BuyCoffee(int& small, int& medium, int& large, char key, int& totalsmall, int& totalmedium, int& totallarge){
	int counter;
	switch(key){
		case 'S':
			std::cout << "How Many? ";
			std::cin >> counter;
			small += counter;
			totalsmall += counter;
			break;
		case 'M':
			std::cout << "How Many? ";
			std::cin >> counter;
			medium += counter;
			totalmedium += counter;
			break;
		case 'L':
			std::cout << "How Many? ";
			std::cin >> counter;
			large += counter;
			totallarge += counter;
			break;
		deafult:	
			break;
	}

}


void CoffeeMenu(char& choice, char& select, int& small, int& medium, int&large, int& totals, int& totalm,int& totall){
		while (choice == 'B'){
			if(select == 'q'){
				select = '\0';
				choice = '\0';
				std::cout << "Returning to Prev Screen\n";
				break;
			}
			if(select == 'c'){
				std::cout << "Confirming Purchase\n";
				select = '\0';
				choice = '\0';
				makeReceipt(small, medium, large);
				small = 0;
				medium = 0;
				large = 0;
				break;
			}
			std::cout << "*****************************" << "\n";
			std::cout << "[" << small << "] Small Coffee\n";
			std::cout << "[" << medium << "] Medium Coffee\n";
			std::cout << "[" << large << "] Large Coffee\n";
			std::cout << "*****************************" << "\n";
			std::cout << "Press [S] for Small" << "\n";
			std::cout << "Press [M] for Medium" << "\n";
			std::cout << "Press [L] for Large" << "\n";
			std::cout << "Press [q] to Exit this Menu" << "\n";
			std::cout << "Press [c] to Confirm this Purchase" << "\n";
			std::cin >> select;
			BuyCoffee(small, medium, large, select, totals, totalm, totall);
		}
}


void makeReceipt(int& small, int& medium, int& large){
	const double smallCoffee = 1.75;
	const double mediumCoffee = 1.90;
	const double largeCoffee = 2.00;
	double smallPrice,mediumPrice,largePrice;

	smallPrice = smallCoffee*small;
	mediumPrice = mediumCoffee*medium;
	largePrice =  largeCoffee*large;

	std::cout << "************" << "Quantity " << " Price\n";
	std::cout << "Small Coffee " << small << " " << smallPrice << '\n';
	std::cout << "Meduim Coffee " << medium  << " " << mediumPrice << '\n';
	std::cout << "Small Coffee " << large  << " " << largePrice << '\n';
	std::cout << "Total " << smallPrice + mediumPrice + largePrice << '\n';
}


void showTotalRev(int& small, int& medium, int& large){
	const double smallCoffee = 1.75;
	const double mediumCoffee = 1.90;
	const double largeCoffee = 2.00;
	double smallPrice,mediumPrice,largePrice;

	smallPrice = smallCoffee*small;
	mediumPrice = mediumCoffee*medium;
	largePrice =  largeCoffee*large;

	std::cout << "************" << "Quantity" << "Price\n";
	std::cout << std::setprecision(2) << std::fixed;
	std::cout << "Small Coffee" << small  << " " << smallPrice << '\n';
	std::cout << "Meduim Coffee" << medium  << " " << mediumPrice << '\n';
	std::cout << "Small Coffee" << large  << " " << largePrice << '\n';
	std::cout << "Total" << smallPrice + mediumPrice + largePrice << '\n';
}
