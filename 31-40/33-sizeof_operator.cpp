#include <iostream>

int main() {

    // sizeof: 変数のバイトサイズが見れる？

    std::string name = "Yama";
    double gpa = 2.5;
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};  // char型が5つ並んでいるから1バイト
    std::string students[] = {"Spongebob", "Patrick", "Squidward"};

    std::cout << sizeof(name) << " bytes" << std::endl;
    std::cout << sizeof(gpa) << " bytes" << std::endl;
    std::cout << sizeof(grade) << " bytes" << std::endl;
    std::cout << sizeof(student) << " bytes" << std::endl;
    std::cout << sizeof(grades) << " bytes" << std::endl;
    // 要素数の数え方
    // 配列のバイト数を型のバイト数で割る
    std::cout << sizeof(grades)/sizeof(char) << " elements" << std::endl;
    std::cout << sizeof(students)/sizeof(std::string) << " elements" << std::endl;

    return 0;
}
