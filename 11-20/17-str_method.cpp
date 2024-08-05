#include <iostream>

int main() {

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (name.empty()) {
        std::cout << "You didn't enter your name";
    } else if (name.length() > 12) {
        std::cout << "Your name can't be over 12 character";
    } else {
        std::cout << "Welcome " << name << std::endl;
    }

    // 文字列の追加
    name.append("@gmail.com");
    std::cout << "Your username is now " << name << std::endl;

    // 文字列のインデックス
    std::cout << name.at(0) << std::endl;

    // 文字列挿入
    name.insert(0, "@");
    std::cout << name << std::endl;

    // 文字列検索(最初のインデックス)
    std::cout << name.find(' ') << std::endl;

    // 文字列削除
    // [0, 3)
    name.erase(0, 3);
    std::cout << name << std::endl;

    // 文字列の完全消去
    name.clear();
    std::cout << "Hello " << name;

    return 0;
}
