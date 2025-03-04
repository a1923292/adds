#include <iostream>
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main(void){

    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;

    Player* player = new Human(name);
    Player* computer = new Computer();

    Referee ref;

    Player* winner = ref.refGame(player,computer);

    if (winner == player){
        std::cout << player->getName() << " Won\n";
    } else if (winner == nullptr) {
        std::cout << "Draw\n"; 
    } else {
        std::cout << "Computer Won\n"; 
    }

    return 0;
}