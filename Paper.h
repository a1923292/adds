#pragma once
#include <vector>
#include <string>
#include "Move.h"

class Paper : public Move {
    public:
    Paper() : Move("Paper",{"Rock"}) {};
};