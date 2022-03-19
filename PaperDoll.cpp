#include "PaperDoll.h"

PaperDoll::PaperDoll(){
    orderedArray = {'P', 'S', 'S'};
}

void PaperDoll::makeMove(){
    this->move = this->orderedArray[this->amtOfMovesTaken%3];
}