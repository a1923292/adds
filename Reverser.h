#pragma once
#include <string>

class Reverser {
private:
    int xresult = 0;
    int left = 0;
    int right = -1;
public:
    int reverseDigit(int x);  
    std::string reverseString(std::string x);
};
