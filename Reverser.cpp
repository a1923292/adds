#include "Reverser.h"

int Reverser::reverseDigit(int x){
    if (x < 0){
        return -1;
    } 
    if (x == 0) {
        return result;
    } else {
        result *= 10;
        result += (x % 10);
        reverseDigit(x / 10);
    }
}   

std::string Reverser::reverseString(std::string x){
    if (x.empty()) {
        return x;
    }
    return reverseString(x.substr(1)) + x[0];
}


