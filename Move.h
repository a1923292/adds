#pragma once

#include <string>

class Move {
    private:
        std::string playersMove;
        std::vector<std::string> winningCombinations;
    public:
        Move(std::string playersMove_) : playersMove(playersMove_) {}
        Move(std::string playersMove_, std::vector<std::string> winningCombinations_) : playersMove(playersMove_), winningCombinations(winningCombinations_) {}
        std::string getName() const; // returns move name
        std::vector<std::string> getWinningCombinations() const;
};
