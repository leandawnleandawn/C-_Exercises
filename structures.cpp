#include <iostream>
#include <iomanip>
#include <string>
int main(){

	struct house{
	
		double initial_Price;
		std::string name;
	};

	house myHouse;

	myHouse.initial_Price = 20000.03;

	std::cout << std::fixed << std::setprecision(2);
	std::cout << myHouse.initial_Price << '\n';
	return 0;
}
