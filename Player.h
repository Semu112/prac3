#ifndef PLAYER_H
#define PLAYER_H

#include <array>

class Player {

    public:
        virtual void makeMove() = 0;
        char getMove();

    protected:
        char move;
};

#endif