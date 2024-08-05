#include <iostream>

int main() {

    // do while: 何か処理をした後にwhileの条件をかける

    int number;

    // 初期化していないので、ここに引っかからずに下の処理に行ってしまう
    while (number < 0) {
        std::cout << "Enter a positive #: ";
        std:: cin >> number;
    }

    std::cout << "The # is: " << number << std::endl;


    number = 0;

    do {
        std::cout << "Enter a positive #: ";
        std:: cin >> number;
    } while (number < 0);

    std::cout << "The # is: " << number << std::endl;


    return 0;
}
