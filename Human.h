#pragma once

#include <string>
#include "Player.h"
#include "Move.h"
#include <iostream>

class Human : public Player {
    private:
    public:
        Human(std::string name_) : Player(name_) {}
        Human() : Player("Human") {}
        Move* makeMove() override;
        Move* moveFactory(const std::string& objectType) noexcept;
};
