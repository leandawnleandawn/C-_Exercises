#include <iostream>

int main (){

    int upperBound, lowerBound, result, placeholder, index;

    result = 0;

    std::cout << "Upper Bound of Fibonacci: ";
    std::cin >> upperBound;
    std::cout << "Lower Bound of Fibonacci: ";
    std::cin >> lowerBound;

    while ((upperBound <= lowerBound)){
        std::cout << "Upper is less than Lower Bound. Repeat again. Upper Bound of Fibonacci: ";
        std::cin >> upperBound;
        std::cout << "Lower Bound of Fibonacci: ";
        std::cin >> lowerBound;
    }

    while (upperBound < 0 || lowerBound < 0){
        std::cout << "The following numbers are negative numbers. Repeat again. Upper Bound of Fibonacci: ";
        std::cin >> upperBound;
        std::cout << "Lower Bound of Fibonacci: ";
        std::cin >> lowerBound;
    }

    index = lowerBound;

    while(upperBound >= index){
        placeholder = index;
        result += placeholder;
        index++;

        std::cout << result << std::endl;
    }

    return 0;
}