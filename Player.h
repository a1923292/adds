#pragma once
#include "Move.h"

class Player {
    private:
        std::string name;
        Move* choice = nullptr;
    public:
        Player(){}
        Player(std::string name_) : name(name_) {}
        virtual Move* makeMove() = 0;
        std::string getName() const;
        Move* getChoice() const;
        void setChoice(Move* choice);
};
