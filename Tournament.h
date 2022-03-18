#ifndef TOURNAMENT_H
#define TOURNAMENT_h

#include "Player.h"
#include <array>

class Tournament {

    public: 
        Player* run(std::array<Player*, 8> competitors);
};

#endif