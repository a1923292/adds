#pragma once

#include "Player.h"

class Referee {
    private:
    public:
        Referee(){}
        Player* refGame(Player* player1, Player* player2) const;
};

