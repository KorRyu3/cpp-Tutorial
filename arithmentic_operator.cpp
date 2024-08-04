#include <iostream>

int main() {

    // 算術演算子

    int students = 20;

    // add
    // 全部同じ操作
    students = students + 1;
    students += 1;
    students++;  // インクリメント

    // sub
    students = students - 1;
    students -= 1;
    students--;  // デクリメント

    // multi
    students = students * 2;
    students *= 2;

    // div
    students = students / 2;
    students /= 2;

    std::cout << students << std::endl;

    // mod
    int remainder = students % 2;

    std::cout << remainder << std::endl;

    // 計算順序
    // かっこ ()
    // multi & div
    // add & sub

    return 0;
}
