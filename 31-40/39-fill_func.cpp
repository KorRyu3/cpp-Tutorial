#include <iostream>

int main() {

    // fill
    // fill(begin, end, value)

    const int SIZE = 99;
    std::string foods[SIZE];

    // 1/3でpizza, hamburger, hotdog
    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "hamburgers");
    fill(foods + (SIZE/3)*2, foods + SIZE, "hotdog");

    for (std::string food: foods) {
        std::cout << food << std::endl;
    }

    return 0;
}
