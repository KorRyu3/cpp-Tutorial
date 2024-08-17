#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {

    char player;
    char computer;

    player = getUserChoice();
    std::cout << "You choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer's choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}


char getUserChoice() {
    char player;
    std::cout << "Rock-Scissors-Paper Game!" << std::endl;

    do {
        std::cout << "Choose one of the following!" << std::endl;
        std::cout << "*************************" << std::endl;
        std::cout << "'r' for rock" << std::endl;
        std::cout << "'s' for scissors" << std::endl;
        std::cout << "'p' for paper" << std::endl;

        std::cin >> player;

    } while(player != 'r' && player != 'p' && player != 's');


    return player;
}


char getComputerChoice() {

    srand(time(NULL));
    int num = rand() % 3 + 1;

    switch (num) {
        case 1: return 'r';
        case 2: return 's';
        case 3: return 'p';
    }

    return 0;

}

void showChoice(char choice) {
    switch (choice) {
        case 'r':
            std::cout << "Rock" << std::endl;
            break;
        case 's':
            std::cout << "Scissors" << std::endl;
            break;
        case 'p':
            std::cout << "Paper" << std::endl;
            break;
    }
}

void chooseWinner(char player, char computer) {

    std::string result = "";

    // あいこ
    if (player == computer) {
        result = "It's a tie!";
    }
    // player勝ち
    else if (
        (player == 'r' && computer == 's') ||
        (player == 's' && computer == 'p') ||
        (player == 'p' && computer == 'r')
    ) {
        result = "It's a win!";
    }
    // player負け
    else {
        result = "It's a lose!";
    }

    std::cout << result << std::endl;

}
