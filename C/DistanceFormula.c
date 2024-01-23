#include <iostream>
#include <cmath>
#define PI 3.1416

double distance(int x1, int x2, int y1, int y2);
double radius(double diameter);
double circumference(double radius = -999.0, double diameter = -999.0);
double area(double radius);
int main(){
	double x1, x2, y1, y2;

	std::cout << "P (x1 y1)";
	std::cin >> x1 >> y1;
	std::cout << "Q (x2 y2)";
	std::cin >> x2 >> y2;

	std::cout << "Distance: " << distance(x1, x2, y1, y2) << "\n";
	std::cout << "Diameter: " << radius(distance(x1, x2, y1, y2)) << "\n";
	std::cout << "Circumference: " << circumference(distance(x1, x2, y1, y2)) << "\n";
	std::cout << "Area: " << area(radius(distance(x1, x2, y1, y2))) << "\n";

	return 0;
}

double distance(int x1, int x2, int y1, int y2){
	return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
}

double radius(double diameter){
	return diameter/2.0;
}
double circumference(double radius, double diameter){
	if (radius != -999.0 && diameter == -999.0){
		return 2.0 * PI * radius; 
	}else if (radius == -999.0 && diameter != -999.0){
		return PI * diameter;
	}else{
		return 0.0;
	}
}
double area(double radius){
	return PI * pow(radius, 2);

}
