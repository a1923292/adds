#pragma once

#include <list>
#include <string>

class BigNumCalc {
    std::list<int> list;
public:
    std::list<int> buildBigNum(std::string numString);
    std::list<int> add(std::list<int> num1, std::list<int> num2);
    std::list<int> sub(std::list<int> num1, std::list<int> num2);
    std::list<int> mul(std::list<int> num1, std::list<int> num2);
};  