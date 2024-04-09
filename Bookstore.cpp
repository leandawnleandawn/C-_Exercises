#include <iostream>
#include <string>
#include <fstream>

class BookStore{
	private:
		int bookCount;
		float bookSales;
	public:
		BookStore(int count, float sales){
			bookCount = count;
			bookSales = sales;
		}

};

class Book{
	private:
		std::string name;
		std::string author;
		std::string date;
	public:
		Book(std::string n, std::string au, std::string d){
			name = n;
			author = au;
			date = d;
		}

};

class Customer{
	private:
		std::string name;
		float balance;
		int numberOfBooks;
	public:
		Customer(std::string n, float b, int books){
			name = n;
			balance = b;
			numberOfBooks = books;
		}
};

int main(){

	while(std::)
}