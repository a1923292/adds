#pragma once

#include "Player.h"
#include "Move.h"

class Computer : public Player {
    private:
    public:
        Computer();
        Move* makeMove() override;
};


