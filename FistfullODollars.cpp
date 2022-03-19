#include "FistfullODollars.h"

FistfullODollars::FistfullODollars(){
    orderedArray = {'R', 'P', 'P'};
    this->name = "FistfullODollars";
}

void FistfullODollars::makeMove(){
    this->move = this->orderedArray[amtOfMovesTaken%3];
    amtOfMovesTaken++;
    if(this->amtOfMovesTaken > 4){
        this->amtOfMovesTaken = 0;
    }
}