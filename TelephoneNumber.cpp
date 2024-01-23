#include <iostream>
#include <string>

int main (){

    std::string inputLetters, placeholder;

    std::cout << "Please input the following letters to have. -1 to quit" << std::endl;
    std::cin >> inputLetters ;

    while (inputLetters != "-1"){
        std::string answer;
        std::cout << "Okay you input is: " << inputLetters << std::endl;
        for(int character = 0; character < inputLetters.length(); character++){
            if (inputLetters[character] == 'A' || inputLetters[character] == 'a' || inputLetters[character] == 'B' || inputLetters[character] == 'b' || inputLetters[character] == 'c' || inputLetters[character] == 'C' ){
                answer.append("2");
            }
            if (inputLetters[character] == 'D' || inputLetters[character] == 'd' || inputLetters[character] == 'E' || inputLetters[character] == 'e' || inputLetters[character] == 'f' || inputLetters[character] == 'F' ){
                answer.append("3");
            }
            if (inputLetters[character] == 'G' || inputLetters[character] == 'g' || inputLetters[character] == 'H' || inputLetters[character] == 'h' || inputLetters[character] == 'i' || inputLetters[character] == 'I' ){
                answer.append("4");
            }
            if (inputLetters[character] == 'J' || inputLetters[character] == 'j' || inputLetters[character] == 'K' || inputLetters[character] == 'k' || inputLetters[character] == 'L' || inputLetters[character] == 'l' ){
                answer.append("4");
            }
            if (inputLetters[character] == 'M' || inputLetters[character] == 'm' || inputLetters[character] == 'N' || inputLetters[character] == 'n' || inputLetters[character] == 'o' || inputLetters[character] == 'O' ){
                answer.append("5");
            }
            if (inputLetters[character] == 'P' || inputLetters[character] == 'p' || inputLetters[character] == 'Q' || inputLetters[character] == 'q' || inputLetters[character] == 'r' || inputLetters[character] == 'R' || inputLetters[character] == 'S' || inputLetters[character] == 's'){
                answer.append("6");
            }
            if (inputLetters[character] == 'T' || inputLetters[character] == 't' || inputLetters[character] == 'U' || inputLetters[character] == 'u' || inputLetters[character] == 'v' || inputLetters[character] == 'V' ){
                answer.append("7");
            }
            if (inputLetters[character] == 'W' || inputLetters[character] == 'w' || inputLetters[character] == 'X' || inputLetters[character] == 'x' || inputLetters[character] == 'Y' || inputLetters[character] == 'y' || inputLetters[character] == 'z' || inputLetters[character] == 'Z'){
                answer.append("8");
            }
            if (inputLetters[character] == '_'){
                answer.append("-");
            }
        }

        std::cout << "The Translation of the string into call number is "<< answer << std::endl;
        std::cout << "Please input the following letters to have. -1 to quit" << std::endl;
        std::cin >> inputLetters;
    }
    return 0;
}