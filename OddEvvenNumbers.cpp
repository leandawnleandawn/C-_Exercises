#include <iostream>

void initialization(int& oddCount, int& evenCount, int& zeroCount);
void getNumber(int& number);
void countNumber(int number, int& oddCount, int& evenCount, int& zeroCount);
void printResults(int& oddCount, int& evenCount, int& zeroCount);

int main(){

	int odd, even, zero, number, result;

	initialization(odd, even, zero);

	while(number != -1){
		getNumber(number);
		countNumber(number, odd, even, zero);

	}

		printResults(odd, even, zero);
	return 0;
}

void initialization(int& oddCount, int& evenCount, int& zeroCount){
	oddCount = 0;
	evenCount = 0;
	zeroCount = 0;

}

void getNumber(int& number){

	std::cin >> number;

}

void countNumber(int number, int& oddCount, int& evenCount, int& zeroCount){
	switch(number % 2){
		case 0:
			evenCount++;
			break;
		case 1:
		case -1:
			oddCount++;
	}
}

void printResults(int& oddCount, int& evenCount, int& zeroCount){
	std::cout << "Odd: " << oddCount << std::endl;
	std::cout << "Even: " << evenCount << std::endl;
	std::cout << "Zero: " << zeroCount << std::endl;
}