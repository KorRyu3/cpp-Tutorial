#include <iostream>


int main() {

    int x;  // declaration
    x = 5;  // assignment

    std::cout << x << std::endl;

    int x2 = 5;
    int y = 6;
    int sum = x2 + y;

    std::cout << x2 << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';


    // integer
    int age = 21;
    int year = 2023;
    int days = 7.5;  // floatをint型に無理やり入れると、小数点が切り捨てられる

    std::cout << days << std::endl;

    // double
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    std::cout << price << std::endl;

    // single character
    char grade = 'A';
    char initial = 'BC';  // charは単一の文字列だけ保持できる
    char currency = '$';

    std::cout << initial << std::endl;

    // boolean
    bool student = false;  // 0
    bool power = true;  // 1
    bool forSale = true;

    std::cout << student << std::endl;

    // string
    std::string name = "Bro";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "123 Faake St.";

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old" << std::endl;


    // const
    const double PI = 3.14159;  // read-only
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm" << std::endl;

    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HIGHT = 1080;

    return 0;

}
