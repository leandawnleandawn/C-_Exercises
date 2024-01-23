#include <iostream>
#include <string>

bool isVowel(char& str);
std::string rotateStr(std::string str);
int main() {

	std::string input, orgInt;

	std::cout << "Your Input String: ";
	std::cin >> input;

	orgInt = input;

	if (isVowel(input[0])){
		input.append("-way");
		std::cout << input << '\n';
	}else{
		input.append("-");
		for(int position = 0; position < input.length() + 1; position++){		
			if (isVowel(input[0])){
				input.append("ay");
				std::cout << input << '\n';
				break;
			}
			if (position == input.length() && !isVowel(input[0])){
				orgInt.append("-way");
				std::cout << orgInt << '\n';
			}	
			input = rotateStr(input);
		}
	}
	return 0;
}


bool isVowel(char& str){
	switch(str){
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
		case 'y':
		case 'Y':
			return true;
			break;
	}
	return false;
}

std::string rotateStr(std::string str){
	int len = str.length();
	std::string rstr = str.substr(1, len - 1) + str[0];
	return rstr;

}
