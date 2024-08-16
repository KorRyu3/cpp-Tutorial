#include <iostream>

void printNum();

int myNum = 3;

int main() {

    // 変数のスコープ

    int myNum = 1;

    // ローカル変数を使用
    std::cout << myNum << std::endl;
    // グローバル変数を使用
    std::cout << ::myNum << std::endl;

    printNum();

    return 0;
}


void printNum() {
    int myNum = 2;
    std::cout << myNum << std::endl;
}
