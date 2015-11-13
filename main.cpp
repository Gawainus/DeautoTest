#include <iostream>
#include "Piece.h"
#include "Queen.h"
#include "Helpers.cpp"



int main() {

    auto str = "abc";
    auto a = 1;
    auto reference = &a;
    auto funcPrintNum = printNum;

    auto piece1 = new Piece();
    auto queen1 = new Queen();

    std::cout << str << std::endl;
    std::cout << a << std::endl;
    std::cout << reference << std::endl;

    funcPrintNum(10);
    return 0;
}
