#include <iostream>

const int SIZE = 10;

int main() {
	double time[SIZE];
	double distance[SIZE];

	for(int index = 0; index < SIZE; index++){
		time[index] = index * 10;
		std::cout << "Distance @ " << time[index] << '\n';
		std::cin >> distance[index];
	}

	for(int index = 0; index < SIZE; index++){
		std::cout << "Distance @ " << time[index] << "     " << distance[index] << '\n';
		
	}






	return 0;
}
