#include "bigNumCalc.h"
#include <algorithm>
#include <iostream>

// helper function
void removeLeadingZeros(std::list<int>& num) {
    while (num.size() > 1 && num.front() == 0) {
        num.pop_front();
    }
}

std::list<int> bigNumCalc::buildBigNum(std::string numString) {
    std::list<int> result;
    for (char ch : numString) {
        if (isdigit(ch)) {
            result.push_back(ch - '0');
        }
    }
    return result;
}

std::list<int> bigNumCalc::add(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    auto it1 = num1.rbegin();
    auto it2 = num2.rbegin();
    int carry = 0;

    while (it1 != num1.rend() || it2 != num2.rend() || carry) {
        int sum = carry;
        if (it1 != num1.rend()) sum += *it1++;
        if (it2 != num2.rend()) sum += *it2++;
        result.push_front(sum % 10);
        carry = sum / 10;
    }

    return result;
}

std::list<int> bigNumCalc::sub(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    auto it1 = num1.rbegin();
    auto it2 = num2.rbegin();
    int borrow = 0;

    while (it1 != num1.rend()) {
        int a = *it1++ - borrow;
        int b = (it2 != num2.rend()) ? *it2++ : 0;

        if (a < b) {
            a += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        result.push_front(a - b);
    }

    removeLeadingZeros(result);
    return result;
}

std::list<int> bigNumCalc::mul(std::list<int> num1, std::list<int> num2) {
    if (num2.size() != 1) {
        throw std::invalid_argument("Only single-digit multipliers supported.");
    }

    int multiplier = num2.back();
    std::list<int> result;
    int carry = 0;

    for (auto it = num1.rbegin(); it != num1.rend(); ++it) {
        int prod = (*it) * multiplier + carry;
        result.push_front(prod % 10);
        carry = prod / 10;
    }

    if (carry) {
        result.push_front(carry);
    }

    removeLeadingZeros(result);
    return result;
}
