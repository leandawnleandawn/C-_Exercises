#include <iostream>
#include <iomanip>
#include <string>

bool isPalindrome (std::string str);

int main(){
	std::string string1;

	string1 = "hell1h";

	std::cout << isPalindrome(string1);


	return 0;
}

bool isPalindrome(std::string str){

	std::cout<< "String: " << str << std::endl;
	std::cout<< "Length: " << str.length() << std::endl;
	for(int i = 0; i < (str.length()/2); i++){
		if (str[i] != str[str.length()-1-i]){
			std::cout<< "This is a not Palindrome." << std::endl;
			return false;
		}
	}
	return true;
}