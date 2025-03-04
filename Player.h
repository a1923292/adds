#pragma once
#include <string>

class Player {
    private:
        std::string name;
        char choice;
    public:
        Player(){}
        Player(std::string name_) : name(name_) {}
        Player(std::string name_, char choice_) : name(name_), choice(choice_) {}
        virtual char makeMove() = 0;
        std::string getName();
        char getChoice();
        void setChoice(char c);
};
