#include <iostream>
#include <string>

struct studentType{
	std::string studentFN;
	std::string studentLN;
	int testScore;
	char grade;
};

void readStudentData(studentType &student_structure);
int main(){

	studentType student_Names[3];

	std::string firstNames[] = {"KIm", "Angel", "Steven"};
	std::string lastNames[] = {"das", "fsa", "goa"};
	int grades[] = {1,2,4};
	char grade[] = {'A','B','C'};

	for (int i = 0; i < 3; i++){
		student_Names[i].studentFN =firstNames[i];
		student_Names[i].studentLN = lastNames[i];
		student_Names[i].testScore = grades[i];
		student_Names[i].grade = grade[i];
	}
	 
	for (int i = 0; i < 3; i++){
		readStudentData(student_Names[i]);
	}




	return 0;
}


void readStudentData(studentType &student_structure){

	std::cout << "First Name " << student_structure.studentFN << std::endl;
	std::cout << "Last Name " << student_structure.studentLN << std::endl;
	std::cout << "Test Score " << student_structure.testScore << std::endl;
	std::cout << "Grade " << student_structure.grade << std::endl;

}