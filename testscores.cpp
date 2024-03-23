#include <iostream>
#include <fstream>
#include <iomanip>

int main() {

	std::ifstream inFile;
	std::ofstream outFile;

	int results[25];

	int ranges[8];
	
	std::string range_result[] = {"0-24","25-49","50-74", "75-99", "100-124", "125-149", "150-174", "175-199", ">200"};
	inFile.open("testscores.txt");
	outFile.open("results.txt");

	for(int i = 0; i < 25; i++){
		inFile >> results[i];
	}
	for (int i = 0; i < 8; i++){
		ranges[i] = 0;
	}

	for (int i : results){
		if (i >= 0 && i < 24){
			ranges[0]++;
		}else if(i >= 25 && i < 49){
			ranges[1]++;
		}else if(i >= 50 && i < 74){
			ranges[2]++;
		}else if(i >= 75 && i < 99){
			ranges[3]++;
		}else if(i >= 100 && i < 124){
			ranges[4]++;
		}else if(i >= 125 && i < 149){
			ranges[5]++;
		}else if(i >= 150 && i < 174){
			ranges[6]++;
		}else if(i >= 175 && i < 199){
			ranges[7]++;
		}else{
			ranges[8]++;
		}
	}
	for (int i = 0; i < 8; i++){
		outFile << range_result[i] << std::setw(5) << ranges[i] << '\n';
	}


	inFile.close();
	outFile.close();
	return 0;

}
