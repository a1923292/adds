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
    if (x.empty()) {
        return ""; 
    }
    if (this->right == -1) this->right = x.length()-1;
    if (left >= right) {
        return x;
    } else {
        std::swap(x[left], x[right]);
        left++;
        right--;
        return reverseString(x);
    }
}


