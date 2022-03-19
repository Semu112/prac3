#include "PaperDoll.h"

PaperDoll::PaperDoll(){
    orderedArray = {'P', 'S', 'S'};
    this->name = "PaperDoll";
}

void PaperDoll::makeMove(){
    this->move = this->orderedArray[this->amtOfMovesTaken%3];
    amtOfMovesTaken++;
    if(this->amtOfMovesTaken > 4){
        this->amtOfMovesTaken = 0;
    }
}