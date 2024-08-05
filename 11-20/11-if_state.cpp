#include <iostream>

int main() {

    // if

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 100) {
        std::cout << "You are too old to enter this site!";
    } else if (age >= 18) {
        std::cout << "Welcome ot the site!";
    } else if (age < 0) {
        std::cout << "You haven't been born yet!";
    } else {
        std::cout << "You are not old enough to enter !";
    }

    return 0;
}
