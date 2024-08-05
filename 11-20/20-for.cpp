#include <iostream>

int main() {
    // for

    // increment
    for (int idx = 0; idx <= 10; idx+=3) {
        std::cout << idx << std::endl;
    }

    // decrement
    for (int idx = 10; idx >= 0; idx--) {
        std::cout << idx << std::endl;
    }

    std::cout << "HAPPY NEW YEAR!" << std::endl;

    return 0;
}
