#ifndef FISTFULLODOLLARS_H
#define FISTFULLODOLLARS_H

#include "Player.h"

class FistfullODollars{

    public:
        FistfullODollars();

    protected:
        int amtOfMovesTaken = 0;
        std::array<char, 3> orderedArray;

};

#endif