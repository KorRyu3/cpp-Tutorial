#include <iostream>

int main() {
    // 温度変換プログラム
    double temp;
    char unit;  // 摂氏 or 華氏

    std::cout << "***** Temperature conversion *****" << std::endl;
    std::cout << "F = Fahrenheit" << std::endl;
    std::cout << "C = Celsius" << std::endl;
    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f') {
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "temperature is: " << temp << "F" << std::endl;
    } else if (unit == 'C' || unit == 'c') {
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "temperature is: " << temp << "C" << std::endl;
    } else {
        std::cout << "Please enter in only C or F" << std::endl;
    }

    std::cout << "**********************************" << std::endl;

    return 0;
}
