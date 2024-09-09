#include <iostream>

int main() {

    // memory address
    // &をつけてアクセスできる

    std::string name = "Bro";
    int age = 21;
    bool student = true;

    // ex. 0x98fbbff910  <- プログラムを実行すると変わる
    // メモリは直列につながっているため、アドレスも直列
    std::cout << &name << std::endl;
    std::cout << &age << std::endl;  // int = 4bytes
    std::cout << &student << std::endl;  // boolean = 1 byte

    return 0;
}
