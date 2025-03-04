#include "Player.h"

std::string Player::getName(){
    return this->name;
}

char Player::getChoice(){
    return this->choice;
}

void Player::setChoice(char c){
    this->choice = c;
}