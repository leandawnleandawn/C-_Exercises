#include <iostream>

int main (){

	unsigned int n;
	unsigned long long result;

	n = 20;

	result = n;
	while (n > 0){
		std::cout << result << std::endl;
		result *= n-1;
		n--;
	}
	return 0;
}