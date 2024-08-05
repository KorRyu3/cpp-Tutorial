#include <iostream>

int main() {
    // 型変換
    // implicit: 暗黙的型変換
    // explicit: 明示的型変換

    double x = (int) 3.14;

    std::cout << x << std::endl;

    char c = 100;  // explicit
    std::cout << c << std::endl;

    std::cout << (char) 100 << std::endl;  // implicit

    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;
    std::cout << score << "%" << std::endl;

    return 0;
}
