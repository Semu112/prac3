#include "Human.h"

#include <iostream>

void Human::makeMove(){

    char choice;
    std::cout << "Enter move: ";
    std::cin >> choice;
    this->move = choice;

};