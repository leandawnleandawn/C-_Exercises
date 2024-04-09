#include <iostream>
#include <ctime>
#include <string>

class bookType{
	private:
		std::string title;
		std::string ISBN;
		std::string authors[4];
		float price;
		tm year_of_publication = {0};
		int amountOfStock;
		
	public:
		bookType(std::string t, std::string auth[4], float p, int month, int day, int year, std::string isbn){
			title = t;
			price = p;
			for (int i = 0; i < 4; i++){
				authors[i] = auth[i];
			}
			year_of_publication.tm_year = year-1900;
			year_of_publication.tm_mday = day;
			year_of_publication.tm_mon = month - 1;
			mktime(&year_of_publication);
			ISBN = isbn;
		}
		void showBookType(){
			std::cout << "Title: " << title << std::endl;
			std::cout << "Price: " << price << std::endl;
			std::cout << "Year: " << asctime(&year_of_publication) << std::endl;
		}

};
int main(){

	std::string authors[4] = {"Rowling", "cruz", "doten", "\0"};
	bookType harryPoter("Harry Poter", authors, 789.15, 12, 9, 1978, "askjhdkahd");

	harryPoter.showBookType();

	return 0;
}