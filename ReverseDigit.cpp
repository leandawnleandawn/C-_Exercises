#include <iostream>
#include <cmath>

int reverseDigits(int number);

int main(){
	std::cout << reverseDigits(-29384);

	return 0;
}

int reverseDigits(int number){
	bool isNegative;
	if (number < 0){
		isNegative = 1;
		number *= -1;
	}

	int result = 0;
	int length = static_cast<int>(log10(number) + 1);
	
	for(int i = 0; i < length; i++){

		result += (number % 10) * trunc(pow(10, length - i -1));
		number /= 10;
	}

	if (isNegative){
		return result * -1;
	}else{
		return result;
	}
	
}