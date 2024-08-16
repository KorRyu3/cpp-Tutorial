#include <iostream>

int main() {

    // break, continue

    for (int idx = 1; idx <= 20; idx++) {
        if (idx == 13) {
            continue; // ここだけスキップ
            // break;
        }
        std::cout << idx << std::endl;
    }


    return 0;
}
