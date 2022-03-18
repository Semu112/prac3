#ifndef PLAYER_H
#define PLAYER_H

class Player {

    public:
        virtual void makeMove() = 0;
        char getMove();

    protected:
        char move;
};

#endif