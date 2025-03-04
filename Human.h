#pragma once

#include <string>
#include "Player.h"
#include <iostream>

class Human : public Player {
    private:
    public:
        Human(std::string name_) : Player(name_) {}
        Human() : Player("Human") {}
        char makeMove() override;
};
