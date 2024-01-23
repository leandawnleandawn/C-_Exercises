#include <iostream>

bool isVowel(char& input);
int main(){
	std::string input;
	int count = 0;
	std::cin >> input;

	for(int i = 0; i < input.length(); i++){
		if (isVowel(input[i])){
			count++;
		}
	}

	std::cout << "There are " << count << " in this text.\n";

	return 0;
}

bool isVowel(char& input){
		if (input == 'a' ||input == 'e' ||input == 'i' ||input == 'o' ||input == 'u'){
		return 1;
	}else{
		return 0;
	}
}