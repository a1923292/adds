#pragma once
#include <vector>
#include <string>
#include "Move.h"

class Pirate : public Move {
    public:
    Pirate() : Move("Pirate",{"Monkey","Robot"}) {};
};