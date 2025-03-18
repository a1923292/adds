#include "Reverser.h"

int Reverser::reverseDigit(int x){
    if (x < 0){
        return -1;
    } 
    if (x == 0) {
        return this->xresult;
    } else {
        this->xresult *= 10;
        this->xresult += (x % 10);
        x /= 10;
        return reverseDigit(x);
    }
}   

std::string Reverser::reverseString(std::string x){
    this->right = x.size()-1;
    if (x.length() == 0) return "";
    if (left + moveIn > right - moveIn){
        return x;
    } else {
        std::swap(x[left+moveIn],x[right-moveIn]);
        moveIn++;
        return reverseString(x);
    }
}


