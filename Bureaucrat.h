#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include "Player.h"

class Bureaucrat : public Player{

    public:
        Bureaucrat();
        virtual void makeMove();
};

#endif