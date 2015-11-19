#include <iostream>
#include "Piece.h"
#include "Queen.h"
#include "Helpers.cpp"



int main() {

    const char * str = "abc";
    int a = 1;
    int * reference = &a;

    class Piece * piece1 = new Piece();
    class Queen * queen1 = new Queen();

    std::cout << str << std::endl;
    std::cout << a << std::endl;
    std::cout << reference << std::endl;
    std::cout << piece1 << std::endl;
    std::cout << queen1 << std::endl;

    // funcPrintNum(10);
    return 0;
}
