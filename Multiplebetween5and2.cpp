#include <iostream>

int main(){

    int innerBounds, outerBounds;

    std::cout << "Range of Values:";
    std::cin >> innerBounds >> outerBounds;

    for (int i = innerBounds; i <= outerBounds; i++){
        if(i % 2 == 0){
            std::cout << "This " << i << " is divisible by 2"<< std::endl;
        }
        if(i % 5 == 0){
            std::cout << "This " << i << " is divisible by 5"<<std:: endl;
        }
    }

    return 0;
}