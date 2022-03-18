#include "RandomComputer.h"
#include "Avalanche.h"
#include "Toolbox.h"
#include "Bureaucrat.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"
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
    FistfullODollars fistfullODollars;

    std::array<Player*, 8> competitors = {&randComp, &randComp1, &avalanche, &toolbox, &randComp, &randComp1, &avalanche, &toolbox};

    tourney.run(competitors);

    return 0;
}
