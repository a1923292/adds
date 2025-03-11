#pragma once

#include "Player.h"

class Referee {
    private:
    public:
        Referee(){}
        static std::unordered_map<std::string,Move*> winningChoiceObjects;
        Player* refGame(Player* player1, Player* player2) const;
};

