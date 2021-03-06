#include <iostream>
#include "Piece.h"
#include "Queen.h"
#include "Helpers.cpp"



int main() {

    const char * str = "abc";
    int a = 1;
    int * reference = &a;

    // These can be done by std::function
    auto funcPrintNum = printNum;
    auto funcStrCmp = stringCompare;

    class Queen * queen1 = new Queen();

    // it thinks this is a _Bool
    auto funcMoveQueen = queen1->leagalToMove(0, 1);

    std::cout << str << std::endl;
    std::cout << a << std::endl;
    std::cout << reference << std::endl;
    std::cout << queen1 << std::endl;

    funcStrCmp("A", "B");
    funcPrintNum(10);



    return 0;
}
