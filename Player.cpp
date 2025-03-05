#include "Player.h"

std::string Player::getName() const {
    return this->name;
}

char Player::getChoice() const {
    return this->choice;
}

void Player::setChoice(char c){
    this->choice = c;
}