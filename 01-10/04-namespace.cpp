#include <iostream>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {
    // namespace: 名前の競合を防ぐためのソリューション

    using namespace first;  // 明示的にfirst名前空間内の変数を使うことを宣言
    // これをすると、`first::x`のようにやらず`x`でアクセスできる

    // これだと、変数名がかぶっちゃうかもしれない
    // using namespace std;  // std::coutとやらず、coutにアクセスできる

    // std::stringだけstringでアクセスできる
    // ほかのstdは通常通りアクセスしなければならない
    using std::string;
    using std::cout;

    std::cout << x << std::endl;
    std::cout << first::x << std::endl;  // firstスコープ内のxを使用する
    std::cout << second::x << std::endl;

    int x = 0;
    std::cout << x << std::endl;

    // using namespace stdかusing std::coutをしていれば
    // stdを省略しても大丈夫
    cout << x << std::endl;

    string name = "Bro";

    cout << name << std::endl;

    return 0;
}
