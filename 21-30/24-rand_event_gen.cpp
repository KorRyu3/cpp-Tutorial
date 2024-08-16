#include <iostream>
#include <ctime>

int main() {

    srand(time(0));
    int randNum = rand() % 5 + 1;
    std::string message = "";

    switch(randNum) {
        case 1:
            message = "You win a bumper sticker!";
            break;
        case 2:
            message = "You win a t-shirt!";
            break;
        case 3:
            message = "You win a free lunch!";
            break;
        case 4:
            message = "You win a gift card!";
            break;
        case 5:
            message = "You win a concert tickets!";
            break;
    }

    std::cout << message << std::endl;

    return 0;
}
