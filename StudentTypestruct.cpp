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

	studentType student_Names[1];

	student_Names[0].studentFN = "KIm";
	student_Names[0].studentLN = "bob";

	readStudentData(student_Names[0]);




	return 0;
}


void readStudentData(studentType &student_structure){

	std::cout << "First Name" << student_structure.studentFN << std::endl;
	std::cout << "Last Name" << student_structure.studentLN << std::endl;
	std::cout << "Test Score" << student_structure.testScore << std::endl;
	std::cout << "Grade" << student_structure.grade << std::endl;

}