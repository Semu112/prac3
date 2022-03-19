#ifndef PAPERDOLL_H
#define PAPERDOLL_H

#include "Player.h"

class PaperDoll : public Player{

    public:
        PaperDoll();
        void makeMove();

    protected:
        int amtOfMovesTaken = 0;
        std::array<char, 3> orderedArray;

};

#endif