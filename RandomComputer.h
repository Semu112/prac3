#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H

#include "Player.h"

#include <array> 
#include <cstdlib>
#include <time.h>

class RandomComputer : public Player{

    public:
        virtual void makeMove();

    private: 
        std::array<char, 3> possibleMoves = {'R', 'P', 'S'};
};

#endif