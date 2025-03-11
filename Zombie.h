#pragma once
#include "Move.h"

class Zombie : public Move {
    public:
    Zombie() : Move("Scissors",{"Pirate","Monkey"},{"Rock","Paper","Scissors"}) {}
};