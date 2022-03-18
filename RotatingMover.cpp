#include "RotatingMover.h"

void RotatingMover::makeMove(){

    this->move = orderedArray[amtOfMovesTaken%3];
    this->amtOfMovesTaken++;

}