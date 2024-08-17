#include <iostream>

int main() {

    // foreach

    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};
    for (std::string student: students) {
        std::cout << student << std::endl;
    }

    int grades[] = {65, 72, 81, 93};
    for (int grade: grades) {
        std::cout << grade << std::endl;
    }


    return 0;
}
