#include <iostream>
#include <string>
#include <iomanip>

class CashRegister{
	private:
		int cashOnHand;
	public:
		int getCurrentBalance() const;
		void acceptAmount(int amountIn);
		CashRegister(int cashIn = 100){
			if (cashIn >= 0){
				cashOnHand = 500;
			}else{
				cashOnHand = cashIn;
			}
		}

};

class DispenserType{
	private:
		int numberofItems;
		int cost;
	public:
		int getnumberofItems() const;
		int getcost() const;
		void makesale();
		DispenserType(int setnumberofItems = 50, int setcost = 50){
			if (setnumberofItems >= 0){
				numberofItems = setnumberofItems;
			}else{
				numberofItems = 50;
			}
			if (setcost >= 0){
				cost = setcost;
			}else{
				cost = 50;
			}
		}

};

int main(){

	CashRegister cashregister(200);
	DispenserType apple(25, 3);

	char key_pressed;
	do{
		std::cout << "Juice Dispenser" << std::endl;
		std::cout << "[A] Apple" << std::endl;
		std::cout << "[G] Grape" << std::endl;
		std::cout << "[O] Orange" << std::endl;
		std::cout << "[e] exit" << std::endl;
		if (key_pressed == 'e'){
			std::cout << "Thank you for ordering" << std::endl;
			break;
		}
	}while(std::cin >> key_pressed);

	return 0;
}

int CashRegister::getCurrentBalance() const {
	return cashOnHand;
}

void CashRegister::acceptAmount(int amountIn){
	cashOnHand += amountIn;
}

int DispenserType::getnumberofItems() const{
	return numberofItems;
}

int DispenserType::getcost() const{
	return cost;
}

void DispenserType::makesale(){
	 
	numberofItems--;

}