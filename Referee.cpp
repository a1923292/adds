#include "Referee.h"
#include "Human.h"
#include <exception>
#include <iostream>
#include <vector>
#include <utility>

Player* Referee::refGame(Player* player1, Player* player2) const {
    Human* humanPlayer;
    humanPlayer = dynamic_cast<Human*>(player1);
    if (humanPlayer == nullptr){
        humanPlayer = dynamic_cast<Human*>(player2);
        if (humanPlayer == nullptr) throw std::runtime_error("neither player is human");

    }
    char humanChoice = humanPlayer->makeMove();
    char computerChoice = 'R'; // always rock for simpliciry
    if (humanChoice == computerChoice){
        return nullptr;
    } else {
        // structured as <player,computer>
        std::vector<std::pair<char,char>> winningChoices = {{'R','S'},{'S','P'},{'P','R'}};
        std::pair<char,char> choices = {humanChoice,computerChoice};
        if (std::find(winningChoices.begin(),winningChoices.end(),choices) == winningChoices.end()){
            return (humanPlayer == player1) ? player2 : player1;
        } else {
            return (humanPlayer == player2) ? player2 : player1;
        }
    }
}