#pragma once
#include "Move.h"

class Ninja : public Move {
    public:
    Ninja() : Move("Ninja", {"Pirate","Zombie"}) {};
};