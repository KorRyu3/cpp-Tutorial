#include <iostream>

int main() {
    // 配列

    // 配列長を指定して初期化
    std::string initArr[4];

    std::string cars[] = {"Corvette", "Mustang", "Camry"};

    cars[0] = "Camaro";

    // car単体 -> メモリアドレス
    std::cout << cars << std::endl;
    // 要素にアクセス
    std::cout << cars[0] << std::endl;
    std::cout << cars[1] << std::endl;
    std::cout << cars[2] << std::endl;

    double prices[] = {5.00, 7.50, 9.99, 15.00};

    std::cout << prices[0] << std::endl;
    std::cout << prices[1] << std::endl;
    std::cout << prices[2] << std::endl;
    std::cout << prices[3] << std::endl;

    return 0;
}
