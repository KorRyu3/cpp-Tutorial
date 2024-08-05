#include <iostream>

int main() {

    // 論理演算子
    // &&, ||, !

    int temp;
    bool sunny = true;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if (temp > 0 && temp < 30) {
        std::cout << "The temperature is good!" << std::endl;
    } else if (temp <= 0 || temp >= 30) {
        std::cout << "The temperature is bad!" << std::endl;
    }

    if (!sunny) {
        std::cout << "It is cloudy outside!";
    } else {
        std::cout << " It is sunny outside!";
    }

    return 0;
}
