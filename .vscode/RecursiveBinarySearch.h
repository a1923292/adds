#pragma once

#include <vector>

class RecursiveBinarySearch {
    private:
        int searchHelper(int start, int end, int target, std::vector<int>& list);
    public:
        bool search(std::vector<int> list, int target);
};