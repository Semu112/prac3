#include "Crescendo.h"

Crescendo::Crescendo(){
    orderedArray = {'P', 'S', 'R'};
    this->name = "Crescendo";
}

void Crescendo::makeMove(){
    this->move = this->orderedArray[amtOfMovesTaken%3];
    amtOfMovesTaken++;
    if(this->amtOfMovesTaken > 4){
        this->amtOfMovesTaken = 0;
    }
}