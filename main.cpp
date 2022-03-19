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

    Avalanche avalanche;
    Toolbox toolbox;
    Toolbox toolbox1;
    Bureaucrat bureaucrat;
    Bureaucrat bureaucrat1;
    Crescendo crescendo;
    Crescendo crescendo1;
    FistfullODollars fistfullODollars;

    std::array<Player*, 8> competitors = {&avalanche, &bureaucrat, &bureaucrat1, &toolbox, &toolbox1, &crescendo, &crescendo1, &fistfullODollars};

    std::cout << avalanche.name;

    Player* winner = tourney.run(competitors);

    std::cout << winner->name;

    return 0;
}
