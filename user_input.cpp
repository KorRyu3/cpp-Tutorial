#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main() {

    std::string name;
    int age;

    std::cout << "What's your age?: ";
    std::cin >> age;

    // 標準出力
    std::cout << "What's your full name?: ";
    // 標準入力. 空白が含まれていてはダメ
    // std::cin >> name;

    // 空白入れても取得可能
    // cinがこれより上にあると、cinの後の\nがバッファーされて、それが入力となってしまう
    // std::getline(std::cin, name);
    std::getline(std::cin >> std::ws, name);  // 空白や改行を削除


    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " years old" << std::endl;

    return 0;
}
