#ifndef PAPERDOLL_H
#define PAPERDOLL_H

#include "Player.h"

class PaperDoll{

    public:
        PaperDoll();

    protected:
        int amtOfMovesTaken = 0;
        std::array<char, 3> orderedArray;

};

#endif