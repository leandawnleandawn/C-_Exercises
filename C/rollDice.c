#include <iostream>
#include <cstdlib>

int rollDice(int sum);
int main(){
	int sumOfTheDigits;

	std::cout << "Sum of the Digits: ";
	std::cin >> sumOfTheDigits;
	
	while (sumOfTheDigits != -999){
		if (sumOfTheDigits > 12){
			std::cout << "Total of Dices is 12. Sum of the Digits: ";
			std::cin >> sumOfTheDigits;
			continue;
		}
		rollDice(sumOfTheDigits);
		std::cout << "Sum of the Digits: ";
		std::cin >> sumOfTheDigits;
	
	}
	
	return 0;
}
int rollDice(int sum){
	int randomDice, randomDice2, randomSum;
	int i = 0;
	do{
		randomDice = rand() % 6 + 1;
		randomDice2 = rand() % 6 + 1;
		randomSum = randomDice + randomDice2;
		std::cout << randomSum<< "\n";
		i++;
	}while(randomSum != sum);

	std::cout << "You got this Sum " << i << " times \n";
	return i;



}
