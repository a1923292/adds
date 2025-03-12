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
#include <unordered_map>
#include <functional>

Move* Human::moveFactory(const std::string& objectType) noexcept {
    static std::unordered_map<std::string,std::function<Move*()>> objectMap = {
        {"Rock", []() -> Move* { return new Rock(); }},
        {"Paper", []() -> Move* { return new Paper(); }},
        {"Scissors", []() -> Move* { return new Scissors(); }},
        {"Robot", []() -> Move* { return new Robot(); }},
        {"Monkey", []() -> Move* { return new Monkey(); }},
        {"Pirate", []() -> Move* { return new Pirate(); }},
        {"Ninja", []() -> Move* { return new Ninja(); }},
        {"Zombie", []() -> Move* { return new Zombie(); }}
    };
    Move* newObject = objectMap[objectType]();
    return newObject;
}   

Move* Human::makeMove() {
    std::vector<std::string> validChoices = {"Rock","Paper","Scissors","Robot","Monkey","Pirate","Ninja","Zombie"};
    std::string choice;
    do {    
        std::cin >> choice;
        std::cout << "\n";
    } while (std::find(validChoices.begin(),validChoices.end(),choice) == validChoices.end());
    // create specific instance of choice
    Move* newMove = moveFactory(choice);
    return newMove;
}