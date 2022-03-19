#ifndef PLAYER_H
#define PLAYER_H

#include <array>
#include <string>

class Player {

    public:
        virtual void makeMove() = 0;
        char getMove();
        std::string name;

    protected:
        char move;
};

#endif