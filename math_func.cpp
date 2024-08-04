#include <iostream>
// https://cplusplus.com/reference/cmath/
#include <cmath>

int main() {

    double x = 3.14;
    double y = 4;
    double z;

    z = std::max(x, y);
    std::cout << z << std::endl;
    z = std::min(x, y);
    std::cout << z << std::endl;

    // cmath
    z = pow(2, 3);
    std::cout << z << std::endl;
    z = sqrt(9);
    std::cout << z << std::endl;
    z = abs(-3);
    std::cout << z << std::endl;
    z = round(x);
    std::cout << z << std::endl;
    z = ceil(x);
    std::cout << z << std::endl;
    z = floor(x);
    std::cout << z << std::endl;

    return 0;
}
