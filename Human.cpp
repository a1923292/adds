#include "Human.h"

char Human::makeMove() {
    char choice_;
    std::cout << "Enter Move: ";
    std::cin >> choice_;
    setChoice(choice_);
    return choice_;
}