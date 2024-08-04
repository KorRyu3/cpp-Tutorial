#include <iostream>
#include <vector>

// typedefで型のエイリアスをつける
// typedef std::vector<std::pair<std::string, int>> pairlist_t;

// typedef std::string text_t;
// typedef int number_t;
// 上下は同じことをする
using text_t = std::string;
using number_t = int;

int main() {

    // pairlist_t pairlist;

    text_t firstName = "Bro";
    number_t age = 19;

    std::cout << firstName << std::endl;
    std::cout << age << std::endl;

    return 0;
}
