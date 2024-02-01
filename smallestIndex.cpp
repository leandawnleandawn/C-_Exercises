#include <iostream>
#include <random>

void initializeArray(int arr[], int len);
void printArray(int arr[], int len);
void insertionSort (int arr[], int len);
int binarySearch(int arr[], int target, int len);

int main() {
	const int LENGTH = 20;
	int arrayOfRandInt[LENGTH];
	initializeArray(arrayOfRandInt, LENGTH);
	printArray(arrayOfRandInt, LENGTH);
	insertionSort(arrayOfRandInt, LENGTH);
	

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

	}

}

void insertionSort(int arr[], int len){

	int variable_key, location, j;

	for (int i = 1; i < len; i++){
		
		j = i - 1;
		variable_key = arr[i];

		location = binarySearch(arr, arr[i], len);

		while(j >= location){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = variable_key;

	}

	printArray(arr, len);
}

int binarySearch(int arr[], int target, int len){
	int lower_bound = 0;
	int upper_bound = len;
	int middle_index;
	while(lower_bound <= upper_bound){
		int middle_index = (lower_bound + (upper_bound-1)) / 2;
		if (arr[middle_index] == target){
			return middle_index + 1;
			break;
		}else if (arr[middle_index] > target){
			lower_bound = middle_index + 1;

		}else{
			upper_bound = middle_index - 1;
		}
	}
	return middle_index + 1;
}
