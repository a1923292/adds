#include "BubbleSort.h"


std::vector<int> BubbleSort::sort(std::vector<int> list){
    while (1){
        int swapCount = 0;
        for (int i = 1; i < list.size(); i++){
            if (list[i] < list[i-1]){
                std::swap(list[i],list[i-1]);
                swapCount++;
            }
        }
        if (swapCount == 0){
            return list;
        }
    }
}