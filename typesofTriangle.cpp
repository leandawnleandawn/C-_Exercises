#include <iostream>

enum triangleType {SCALENE, ISOCELES, EQUILATERAL};
triangleType typeoftrig(double& l1, double& l2, double& l3);
int main(){

	double length1, length2, length3, answer;

	std::cout << "Please input the following sides";

	std::cin >> length1 >> length2 >> length3;

	answer = typeoftrig(length1, length2, length3);

	std:: cout << answer << '\n';
	return 0;
}


triangleType typeoftrig(double& l1, double& l2, double& l3){

if(l1 == l2 && l2 == l3){
	return EQUILATERAL;
}else if (l1 == l2 || l2 == l3 || l3 == l1){
	return ISOCELES;
}else{
	return SCALENE;
}
}
