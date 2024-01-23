#include <iostream>
#include <cstdlib>
#include <random>

enum Choices {ROCK, PAPER, SCISSORS};

void displayRules();
void play();
Choices selectChoice(char playerchoice);
Choices judgmentCall(Choices& play1, Choices& play2);

int main(){

	char response;

	Choices player1;
	Choices player2;
	
	do{
		if (response == 'q'){
			std::cout << "Thank you for Playing!" << '\n';
			system("pause");
			system("cls");
			break;
		}
		switch (response){
			case 'P':
				play();
				break;
			case 'V':
				displayRules();
				system("pause");
				break;
			deafult:
				std::cout << "Use the Correct command" << '\n';
				system("pause");
				break;
		}
		
		system("cls");
		std::cout << "***********************************" << '\n';
		std::cout << "      ROCK, PAPER, SCISSORS        " << '\n';
		std::cout << "      [P] To Play                  " << '\n';
		std::cout << "      [V] To View Rules            " << '\n';
		std::cout << "      [q] to Quit                  " << '\n';
		std::cout << "***********************************" << '\n';
		std::cout << " >> ";
	}while(std::cin >> response); 

	return 0;
}


void displayRules(){
	system("cls");
	std::cout << "  Welcome to the game of Rock, Paper, " << "and Scissors." << std::endl;
	std::cout << "  This is a game for two players. For each " << "game, each" << std::endl;   
	std::cout << " player selects one of the objects, Rock, " << "Paper or Scissors." << std::endl;
	std::cout << " The rules for winning the game are: " << std::endl << "1. If both players select the same object, it " << "is a tie." << std::endl;
	std::cout << "2. Rock breaks Scissors: So player who selects " << "Rock wins." << std::endl;
	std::cout << "3. Paper covers Rock: So player who selects " << "Paper wins." << std::endl;
	std::cout << "4. Scissors cut Paper: So player who selects " << "Scissors wins." << std::endl << std::endl;
	std::cout << "Enter R or r to select Rock, P or p to select " << "Paper, and S or s to select Scissors." << std::endl;
}


void play(){
	int gameCount, player1Count, player2Count, gameWinner;
	char player1Choice, player2Choice;
	Choices player1, player2, winningHand;
	
	player1Count = 0;
	player2Count = 0;
	for (int roundCounter = 1; roundCounter <=5; roundCounter++) {
	system("cls");
	std::cout << "Round " << roundCounter << '\n';
	std::cout << "Player 1: " << player1Count << "      " << "Player 2: " << player2Count << '\n';
	std::cout << "Enter R or r to select Rock, P or p to select " << "Paper, and S or s to select Scissors." << std::endl;
	std::cin >> player1Choice;
	player1 = selectChoice(player1Choice);

	system("cls");
	std::cout << "Round " << roundCounter << '\n';
	std::cout << "Player 1: " << player1Count << "      " << "Player 2: " << player2Count << '\n';
	std::cout << "Enter R or r to select Rock, P or p to select " << "Paper, and S or s to select Scissors." << std::endl;
	std::cin >> player2Choice;
	player2 = selectChoice(player2Choice);

		if (player1 == player2){
			std::cout << "It's a tie. No points awarded." << '\n';
			system("pause");
		}else{
			winningHand = judgmentCall(player1, player2);
			if (winningHand == player1){
				gameWinner = 1;
				player1Count++;
				std::cout << "Player 1 wins." << '\n';
				system("pause");
			}else{
				gameWinner = 2;
				player2Count++;
				std::cout << "Player 2 wins." << '\n';
				system("pause");
			}
		}
	}

	system("pause");
}


Choices selectChoice(char playerchoice){

	switch(playerchoice){
		case 'R':
		case 'r':
			return ROCK;
			break;
		case 'P':
		case 'p':
			return PAPER;
			break;
		case 'S':
		case 's':
			return SCISSORS;
			break;
	}
}



Choices judgmentCall(Choices& play1, Choices& play2){

	if ((play1 == ROCK && play2 == SCISSORS) || (play2 == ROCK && play1 == SCISSORS)){
		return ROCK;
	}
	if ((play1 == SCISSORS && play2 == PAPER) || (play2 == SCISSORS && play1 == PAPER)){
		return SCISSORS;
	}
	if  ((play1 == ROCK && play2 == PAPER) || (play2 == ROCK && play1 == PAPER)){
		return PAPER;
	}

}	
