#include "Reverser.h"
#include <iostream>

int Reverser::reverseDigit(int x){
    if (x < 0){
        return -1;
    } 
    if (x == 0) {
        std::cout << result << std::endl;
        return result;
    } else {
        int modVal = x % 10;
        result *= 10;
        result += modVal;
        return reverseDigit(x / 10);
    }
}   

std::string Reverser::reverseString(std::string x){
    if (x.empty()) {
        return x;
    }
    return reverseString(x.substr(1)) + x[0];
}


