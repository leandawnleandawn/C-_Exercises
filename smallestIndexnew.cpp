#include <iostream>
#include <random>

void initializeArray(int arr[], int len);
void printArray(int arr[], int len);
int smallestInteger(int arr[], int len);
int binarySearch(int arr[], int len, int target);


int main(){

	const int LENGTH = 20;
	int arrayOfRandInt[LENGTH];
	int result, index;
	initializeArray(arrayOfRandInt, LENGTH);
	printArray(arrayOfRandInt, LENGTH);
	result = smallestInteger(arrayOfRandInt, LENGTH);
	index = binarySearch(arrayOfRandInt, LENGTH, result);
	 std::cout << "Smallest Integer " << result << " at " << index << '\n';
	return 0;
}

void initializeArray(int arr[], int len){
	
	std::random_device generator;
	std::uniform_int_distribution<int> distribution (1, 100);

	for (int i = 0; i < len; i++){
		arr[i] = distribution(generator);
	}

}

void printArray(int arr[], int len){

	for (int i = 0; i < len; i++){
		std::cout << arr[i] << " ";
ew 

	}

}

int smallestInteger(int arr[], int len){
	int result, result_index;
	result = arr[0];
	for(int i = 0; i < len; i++){
		if(arr[i] < arr[i+1] && result > arr[i]){
			result = arr[i];
		}
	}
	 return result;
	}