#include <iostream>

using namespace std;

int main() {

    auto str = "abc";
//    int count = 1;
    auto a = 1;
    auto ptr = &a;
    a++;
    std::cout << str << std::endl;
    std::cout << a << std::endl;
    return 0;
}
