#pragma once

#include <string>
#include <vector>

class Move {
    private:
        std::string playersMove;
        std::vector<std::string> winningCombinations;
        std::vector<std::string> forbiddenChoices;
    public:
        Move(std::string playersMove_, std::vector<std::string> winningCombinations_, std::vector<std::string> forbiddenChoices_);
        std::string getName() const; // returns move name
        std::vector<std::string> getWinningCombinations() const;
        std::vector<std::string> getForbiddenChoices() const;
};
