#include "RandomComputer.h"

RandomComputer::RandomComputer(){
    this->name = "RandomComputer";
}

void RandomComputer::makeMove(){
    this->move = possibleMoves[std::rand() % 3];
}