#include "Crescendo.h"

Crescendo::Crescendo(){
    orderedArray = {'P', 'S', 'R'};
}

void Crescendo::makeMove(){
    this->move = this->orderedArray[amtOfMovesTaken%3];
}