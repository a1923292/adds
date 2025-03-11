#pragma once
#include <vector>
#include <string>
#include "Move.h"

class Robot : public Move {
    public:
    Robot() : Move("Robot",{"Ninja","Robot"}) {}
};