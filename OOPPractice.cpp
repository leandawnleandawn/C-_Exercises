#include <iostream>
#include <string>

class Person{
	private:
		int age;
		float salary;
		std::string name;
	public:
		std::string getName() const;
		void setName(std::string);

};

int main(){

	Person lyndon;

	lyndon.setName("Lyndon");
	std::cout << lyndon.getName() << std::endl; 

	return 0;
}

void Person::setName(std::string n){
	name = n;

}
std::string Person::getName() const{
	return name;
}