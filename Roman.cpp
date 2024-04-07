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
	romanic.setRomanNumeral("MCCXI");
	romanic.setRomanInteger();
	std::cout << romanic.getRomanInteger() << std::endl;
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

	for(char i: romanNumeral){
		switch (i)
		{
		case 'M':
			convertednumeral += 1000;
			break;
		case 'D':
			convertednumeral += 500;
			break;
		case 'C':
			convertednumeral += 100;
			break;
		case 'L':
			convertednumeral += 50;
			break;
		case 'X':
			convertednumeral += 10;
			break;
		case 'V':
			convertednumeral += 5;
			break;
		case 'I':
			convertednumeral += 1;
			break;
		default: 
			break;
		}
	}
	romanInt = convertednumeral;
}