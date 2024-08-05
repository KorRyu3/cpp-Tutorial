#include <iostream>

int main() {

    // 三項演算子
    // 条件 ? true : false;

    int grade = 75;

    grade >= 60 ? std::cout << "You pass" << std::endl : std::cout << "You fail!" << std::endl;

    int number = 9;
    // 1: true, 0: falseに対応
    number % 2 ? std::cout << "ODD" << std::endl : std::cout << "EVEN" << std::endl;

    bool hungry = true;

    hungry ? std::cout << "You are hungry" << std::endl : std::cout << "You are full" << std::endl;

    // カナリア演算子
    std:: cout << (hungry ? "You are hungry" : "You are full") << std::endl;

    return 0;
}
