#include <iostream>

void swap(std::string &x, std::string &y);

int main() {

    // 参照渡し？値渡し？
    std::string x = "Kool-Aid";
    std::string y = "Water";

    swap(x, y);

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;


    return 0;
}

// 引数で参照にするかを指定する
void swap(std::string &x, std::string &y) {
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}
