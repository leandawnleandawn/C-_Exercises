#include <iostream>


int main(){

	double alpha[50];


	for (int i = 0; i < 50; i++){
		if(i <= 25){
			alpha[i] = i * i;
		}else{
			alpha[i] = 3 * i;
		}
		std::cout << alpha[i] << ' ';
	}

}
