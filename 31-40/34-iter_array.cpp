#include <iostream>

int main() {

    // 配列の反復
    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};
    for (int i = 0; i < sizeof(students)/sizeof(std::string); i++) {
        std::cout << students[i] << std::endl;
    }

    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    for (int i = 0; i < sizeof(grades)/sizeof(char); i++) {
        std::cout << grades[i] << std::endl;
    }



    return 0;
}
