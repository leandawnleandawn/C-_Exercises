#include <iostream>
#include <string>

class Employee {
	public:
		void gretting();
		Employee(std::string Name, std::string Company, int Age){
			name = Name;
			company = Company;
			age = Age;
	}
		
	private:
		std::string name;
		std::string company;
		int age;
};
int main(){

	Employee employee1 = Employee("Heldkfjs", "hadshjalsd", 24);
	employee1.gretting();
	return 0;
}

void Employee::gretting(){

	std::cout << name << std::endl;
	std::cout << company << std::endl;
	std::cout << age << std::endl;

}
