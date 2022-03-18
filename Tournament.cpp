#include "Tournament.h"
#include "Referee.h"

#include <vector>

Player* Tournament::run(std::array<Player*, 8> competitors){

    //Stores the individual scores of the 8 players
    std::array<int, 8> scores;

    //Declares arrays for the winners of each round
    Player* roundOne[8];
    Player* roundTwo[4];
    Player* roundThree[2];
    Player* winner[1];

    //"round" array contains all the players in each round
    Player** round[4];
    round[0] = roundOne;
        for(int i = 0; i<8; i++){
            round[0][i] = competitors[i];
        }
    round[1] = roundTwo;
    round[2] = roundThree;
    round[3] = winner;

    

    Referee ref;

    for(int j = 0; j<3; j++){
        //1st Round
        for(int k = 0; k<8; k=k+2){
            //Every pair in the first round
            for(int i = 0; i<5; i++){
                //Refs game
                char currentGame = ref.refGame(round[j][k], round[j][k+1]);
                //Increases the score of the winner
                switch (currentGame){
                    case 'W':
                        scores[k]++;
                        break;
                    case 'L':
                        scores[k+1]++;
                        break;
                    case 'T':
                        scores[k]++;
                        scores[k+1]++;
                        break;
                }
            }
            //Determines winner
            if(scores[k]>scores[k+1]){
                round[j+1][k/2] = round[j][k];
            }
            else if(scores[k]<scores[k+1]){
                round[j+1][k/2] = round[j][k+1];
            }
            else{
                round[j+1][k/2] = round[j][k];
            }
        }
    }

    return round[3][0];

}