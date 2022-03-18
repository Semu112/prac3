#include "RandomComputer.h"
#include "Avalanche.h"
#include "Toolbox.h"
#include "Bureaucrat.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistFullODollars.h"
#include "Tournament.h"

#include<iostream>

int main(void){

    std::srand(time(NULL));

    Tournament tourney;
    RandomComputer randComp;
    RandomComputer randComp1;
    Avalanche avalanche;
    Toolbox toolbox;
    Bureaucrat bureaucrat;
    Crescendo crescendo;
    PaperDoll paperDoll;
    FistfullODollars fistFullODollars;

    std::array<Player*, 8> competitors = {&randComp, &randComp1, &avalanche, &toolbox, &bureaucrat, &crescendo, &paperDoll, &fistFullODollars};

    tourney.run(competitors);

    return 0;
}
