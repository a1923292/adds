#include "Computer.h"
#include "Rock.h"

Computer::Computer() : Player("Computer", new Rock()){}

Move* Computer::makeMove(){
    Move* computerMove = new Rock();
    return computerMove;
}