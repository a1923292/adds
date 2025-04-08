#pragma once

#include "Sort.h"

class QuickSort : public Sort {
    private:
    int partition(std::vector<int>& list, int low, int high);
    void quickSort(std::vector<int>& vector, int low, int high);
    public:
    std::vector<int> sort(std::vector<int> list) override;
};