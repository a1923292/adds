#include "Move.h"

Move::Move(std::string playersMove_, std::vector<std::string> winningCombinations_, std::vector<std::string> forbiddenChoices_) : playersMove(playersMove_), winningCombinations(winningCombinations_), forbiddenChoices(forbiddenChoices_) {}

std::string Move::getName() const {
    return this->playersMove;
}

std::vector<std::string> Move::getWinningCombinations() const {
    return this->winningCombinations;
}

std::vector<std::string> Move::getForbiddenChoices() const {
    return this->forbiddenChoices;
}