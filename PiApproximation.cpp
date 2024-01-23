#include <iostream>
#include <iomanip>

int main (){

    int iterations;
    double pi;
    std::cout << std::setprecision(10);
    std::cout << "How many iterations? ";
    std::cin >> iterations;

    int i = 0;

    while (i <= iterations && iterations > 0){
        if (i % 2 == 0){
            pi = pi + (1.0/((2.0*i)+1.0));
        }else{
            pi = pi - (1.0/((2.0*i)+1.0));
        }

        i++;
        std::cout << pi << std::endl;
    }
    std::cout << pi*4 << std::endl;
    return 0;
}