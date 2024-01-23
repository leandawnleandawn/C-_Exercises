#include <iostream>
#include <cmath>
#include <iomanip>

long double pi();
int main(){
	const long double PI = pi();

	std::cout << std::setprecision(10) << std::fixed;
	std::cout << PI << '\n';

	std::cout << sqrt(PI);

	return 0;
}

long double pi(){
	long double result = 0.0;
	for (int i = 0; i < 100000; i++){
		result += (pow(-1.0, i) * (1.0/(2.0*i+1.0)));
	}
	return result*4.0;
}