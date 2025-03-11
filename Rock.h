#pragma once
#include <vector>
#include <string> 
#include "Move.h"

class Rock : public Move {
    public:
    Rock() : Move("Rock",{"Scissors"}) {}
};