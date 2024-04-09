#include <iostream>
#include <string>

class romanType{
	private:
		std::string romanNumeral;
		int romanInt;

	public:
		void setRomanNumeral(std::string numeral);
		void setRomanInteger();
		std::string getRomanNumeral();
		int getRomanInteger();
};

int main () { 

	romanType romanic;
	std::string test_cases[3] = {"MCXIV", "CCCLIX", "MDCLXVI"};

	for(std::string test: test_cases){
	romanic.setRomanNumeral(test);
	romanic.setRomanInteger();
	std::cout << romanic.getRomanInteger() << std::endl;
	}
	return 0;
}

std::string romanType::getRomanNumeral(){
	return romanNumeral;
}

int romanType::getRomanInteger(){
	return romanInt;
}

void romanType::setRomanNumeral(std::string numeral){
	romanNumeral = numeral;
}

void romanType::setRomanInteger(){
		int convertednumeral = 0;

	for(int i = 0; i < size(romanNumeral); i++){
		switch (romanNumeral[i])
		{
		case 'M':
			convertednumeral += 1000;
			break;
		case 'D':
			if (romanNumeral[i+1] == 'M'){
				convertednumeral -= 500;
			}else{
				convertednumeral += 500;
			}
			break;
		case 'C':
			if (romanNumeral[i+1] == 'D'){
				convertednumeral -= 100;
			}else{
				convertednumeral += 100;
			}
			break;
		case 'L':
			if (romanNumeral[i+1] == 'C'){
				convertednumeral -= 50;
			}else{
				convertednumeral += 50;
			}
			break;
		case 'X':
			if (romanNumeral[i+1] == 'L'){
				convertednumeral -= 10;
			}else{
				convertednumeral += 10;
			}
			break;
		case 'V':
			if (romanNumeral[i+1] == 'X'){
				convertednumeral -=5;
			}else{
				convertednumeral += 5;
			}
			break;
		case 'I':
			if (romanNumeral[i+1] == 'V'){
				convertednumeral -= 1;
			}else{
				convertednumeral += 1;
			}
			break;
		default: 
			break;
		}
	}
	romanInt = convertednumeral;
}