// Two groups of students at a local university are enrolled in certain special courses
// during the summer semester. The courses are offered for the first time and are
// taught by different teachers. At the end of the semester, both groups are given the
// same tests for the same courses, and their scores are recorded in separate files. The
// data in each file is in the following form:

#include <iostream>
#include <iomanip>
#include <fstream>

int main(){
	std::string group;
	std::string courseID;
	int numberCourses;
	double average;
	double averageGroup;
	std::ifstream group1;


	group1.open("inputScores.txt");

	group1 >> courseID;

	group1 >> average;

	
	while(average != '|'){
	
	}


}