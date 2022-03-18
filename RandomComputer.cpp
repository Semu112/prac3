#include "RandomComputer.h"

void RandomComputer::makeMove(){
    this->move = possibleMoves[std::rand() % 3];
}