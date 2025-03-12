#include "Referee.h"
#include "Human.h"
#include <exception>


Player* Referee::refGame(Player* player1, Player* player2) const {
    Move* player1Move = player1->makeMove();
    Move* player2Move = player2->makeMove();
    // if draw return nullptr
    if (player1Move->getName() == player2Move->getName()){
        return nullptr;
    } else {
        // check forbidden choices
        std::vector<std::string> forbidden = player1Move->getForbiddenChoices();
        std::vector<std::string> winningComb = player1Move->getWinningCombinations();
        if (std::find(forbidden.begin(),forbidden.end(),player2Move->getName()) != forbidden.end()){
            // if player2s move is forbidden choice then return nullptr
            return nullptr;
        }
        // check if any of player1s winningCombinations matches with player2s move
        return (std::find(winningComb.begin(),winningComb.end(),player2Move->getName()) == winningComb.end()) 
        ? player2 : player1; 
    }
    throw std::runtime_error("Something somewhere went wrong");
}