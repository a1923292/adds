#pragma once

#include "Player.h"

class Computer : public Player {
    private:
    public:
        Computer() : Player("Computer",'R') {}
        char makeMove() override;
};


