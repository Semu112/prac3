#include "Tournament.h"
#include "Referee.h"

#include <vector>
#include <iostream>

Player* Tournament::run(std::array<Player*, 8> competitors){

    std::cout << competitors[0]->name;

    //Stores the individual scores of the 8 players
    std::array<int, 8> scores = {0,0,0,0,0,0,0,0};

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
        for(int k = 0; k<8/(j+1); k=k+2){
            scores = {0,0,0,0,0,0,0,0};
            //Every pair in the first round
            for(int i = 0; i<5; i++){
                std::cout << round[j][k]->name << " vs " << round[j][k+1]->name << ":" << std::endl;
                //Refs game
                char currentGame = ref.refGame(round[j][k], round[j][k+1]);
                //Increases the score of the winner
                switch (currentGame){
                    case 'W':
                        scores[k]++;
                        std::cout << round[j][k]->name << " wins" << std::endl;
                        std::cout << "played " << round[j][k]->getMove() << " against " << round[j][k+1]->getMove() << std::endl;
                        break;
                    case 'L':
                        scores[k+1]++;
                        std::cout << round[j][k+1]->name << " wins" << std::endl;
                        std::cout << "played " << round[j][k+1]->getMove() << " against " << round[j][k]->getMove() << std::endl;
                        break;
                    case 'T':
                        scores[k]++;
                        scores[k+1]++;
                        std::cout << "tie" << std::endl;
                        std::cout << round[j][k+1]->getMove() << " against " << round[j][k]->getMove() << std::endl;
                        break;
                }
                std::cout << std::endl;
            }
            //Determines winner
            if(scores[k]>scores[k+1]){
                round[j+1][k/2] = round[j][k];
                std::cout << round[j][k]->name << "[" << j << "][" << k << "]" << " advances" << std::endl;
            }
            else if(scores[k]<scores[k+1]){
                round[j+1][k/2] = round[j][k+1];
                std::cout << round[j][k+1]->name << "[" << j << "][" << k+1 << "]" << " advances" << std::endl;
            }
            else{
                round[j+1][k/2] = round[j][k];
                std::cout << round[j][k]->name  << "[" << j << "][" << k << "]" << " advances" << std::endl;
            }
            std::cout << std::endl;
        }

        std::cout << std::endl << "NEW ROUND" << std::endl << std::endl;
    }

    std::cout << "Round 1:" << std::endl;
    for(int i = 0; i<8; i++){
        std::cout << round[0][i]->name << ": " << scores[i] << std::endl;
    }
    std::cout << "Round 2:" << std::endl;
    for(int i = 0; i<4; i++){
        std::cout << round[1][i]->name << std::endl;
    }
    std::cout << "Round 3:" << std::endl;
    for(int i = 0; i<2; i++){
        std::cout << round[2][i]->name << std::endl;
    }

    return round[3][0];

}