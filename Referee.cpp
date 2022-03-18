#include "Referee.h"

char Referee::refGame(Player* player1, Player* player2){

    player1->makeMove();
    player2->makeMove();

    char player1Move = player1->getMove();
    char player2Move = player2->getMove();

    if(player1Move == player2Move){
        return 'T';
    }
    else if(player1Move == 'R'){
        if(player2Move == 'P'){
            return 'L';
        }
        else{
            return 'W';
        }
    }
    else if(player1Move == 'P'){
        if(player2Move == 'S'){
            return 'L';
        }
        if(player2Move == 'R'){
            return 'W';
        }
    }
    else if(player1Move == 'S'){
        if(player2Move == 'R'){
            return 'L';
        }
        if(player2Move == 'P'){
            return 'W';
        }
    }
        
    return 'E';
}
;