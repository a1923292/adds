#pragma once
#include <vector>
#include "Move.h"

class Monkey : public Move {
    public:
        Monkey() : Move("Monkey",{"Ninja","Robot"}) {};
};
