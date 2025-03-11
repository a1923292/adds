#include "Player.h"

std::string Player::getName() const {
    return this->name;
}

Move* Player::getChoice() const {
    return this->choice;
}

void Player::setChoice(Move* choice){
    this->choice = choice;
}