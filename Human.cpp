#include "Human.h"
#include <vector>


Move* Human::makeMove() {
    std::vector<std::string> validChoices = {"Rock","Paper","Scissors","Robot","Monkey","Pirate","Ninja","Zombie"};
    std::string choice;
    do {    
        std::cout << "Make Move: ";
        std::cin >> choice;
        std::cout << "\n";
    } while (std::find(validChoices.begin(),validChoices.end(),choice) == validChoices.end());
    Move* newMove = new Move(choice);
    return newMove;
}