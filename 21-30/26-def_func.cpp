#include <iostream>

// ここで空の関数を定義しないと、mainの中でコンパイルエラーが出る
// mainの下に独自関数を定義する際は要注意
void happyBirthday(std::string name, int age);

int main() {

    // 関数

    std::string name = "Ryu";
    int age = 19;

    happyBirthday(name, age);

    return 0;
}

void happyBirthday(std::string name, int age) {
    std::cout << "Happy Birthday to " << name << std::endl;
    std::cout << "Happy Birthday to " << name << std::endl;
    std::cout << "Happy Birthday dear " << name << std::endl;
    std::cout << "Happy Birthday to " << name << std::endl;
    std::cout << "You are " << age << " years old" << std::endl << std::endl;
}
