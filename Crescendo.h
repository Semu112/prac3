#ifndef CRESCENDO_H
#define CRESCENDO_H

#include "Player.h"

class Crescendo : public Player{

    public:
        Crescendo();
        void makeMove();

    protected:
        int amtOfMovesTaken = 0;
        std::array<char, 3> orderedArray;
};

#endif