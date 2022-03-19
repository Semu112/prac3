#include "FistfullODollars.h"

FistfullODollars::FistfullODollars(){
    orderedArray = {'R', 'P', 'P'};
}

void FistfullODollars::makeMove(){
    this->move = this->orderedArray[amtOfMovesTaken%3];
}