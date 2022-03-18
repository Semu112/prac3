#ifndef ROTATINGMOVERS_H
#define ROTATINGMOVERS_H

#include "Player.h"

#include <array>

class RotatingMover : public Player{

    public:
        virtual void makeMove();

    protected:
        int amtOfMovesTaken = 0;
        std::array<char, 3> orderedArray;
};

#endif