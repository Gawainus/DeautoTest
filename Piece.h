//
// Created by yumen on 11/13/15.
//

#ifndef DEAUTOTEST_PIECE_H
#define DEAUTOTEST_PIECE_H


class Piece {

public:


protected:
    int m_xLoc;
    int m_yLoc;

    virtual bool leagalToMove(int xLoc, int yLoc) = 0;

};


#endif //DEAUTOTEST_PIECE_H
