#pragma once
#include <vector>
#include <string>
#include "Move.h"

class Zombie : public Move {
    public:
    Zombie() : Move("Scissors",{"Pirate","Monkey"}) {}
};