#include <iostream>

double square(double length);
double cube(double length);

std::string concatStrings(std::string str1, std::string str2);

int main() {

    double length = 6.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << "Area: " << area << "cm^2" << std::endl;
    std::cout << "Volume: " << volume << "cm^3" << std::endl;

    std::string firstName = "Yama";
    std::string lastName = "Ryu";
    std::string fullName = concatStrings(firstName, lastName);

    std::cout << "Hello " << fullName << std::endl;

    return 0;
}

double square(double length) {
    return length * length;
}

double cube(double length) {
    return length * length * length;
}

std::string concatStrings(std::string str1, std::string str2) {
    return str1 + " " + str2;
}
