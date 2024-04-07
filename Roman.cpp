#include <iostream>
#include <string>

class romanType{
	private:
		std::string romanNumeral;
		int romanInt;

	public:
		void setRomanNumeral(std::string numeral);
		void setRomanInteger(std::string numeral);
		std::string getRomanNumeral();
		int getRomanInteger();
};


int main () {

	romanType romanic;
	romanic.setRomanNumeral("MCCXI");
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

void romanType::setRomanInteger(std::string numeral){
		int convertednumeral;

	for(char i: numeral){
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