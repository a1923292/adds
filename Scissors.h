#pragma once
#include <vector>
#include <string>
#include "Move.h"

class Scissors : public Move {
    public:
    Scissors() : Move("Scissors",{"Paper"}) {};
};