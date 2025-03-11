#include "Move.h"

std::string Move::getName() const {
    return this->playersMove;
}

std::vector<std::string> Move::getWinningCombinations() const {
    return this->winningCombinations;
}