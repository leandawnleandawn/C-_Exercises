#include <iostream>
#include <cmath>
#define PI 3.141
int main (){
	double radius, volume, arclength;

	std::cout << "Please input the following radius: ";
	std::cin >> radius;

	volume = (1.0/3.0) * (PI*pow(radius,2)) * sqrt(16 - (pow(radius, 2)));
	arclength = (8*PI) - (2*PI*radius);

	std::cout << "Reduced Arclength: " << arclength << std::endl;
	std::cout << "Volume: " << volume << std::endl;


	return 0;
}