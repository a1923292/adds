#include "Human.h"
#include <vector>

#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Robot.h"
#include "Monkey.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"


Move* Human::makeMove() {
    std::vector<std::string> validChoices = {"Rock","Paper","Scissors","Robot","Monkey","Pirate","Ninja","Zombie"};
    std::string choice;
    do {    
        std::cout << "Make Move: ";
        std::cin >> choice;
        std::cout << "\n";
    } while (std::find(validChoices.begin(),validChoices.end(),choice) == validChoices.end());
    // create specific instance of choice
    Move* newMove = nullptr;
    
    return newMove;
}