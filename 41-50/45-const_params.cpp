#include <iostream>

void printInfo(const std::string name, const int age);

int main() {

    // const

    std::string name = "Ryu";
    int age = 19;

    printInfo(name, age);

    return 0;
}

// constをparameterに指定して、read-onlyにできる
void printInfo(const std::string name, const int age) {
    std::cout << name << std::endl;
    std::cout << age << std::endl;
}
