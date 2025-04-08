#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list){
    quickSort(list,0,list.size()-1);
    return list;
}



int QuickSort::partition(std::vector<int>& list, int low, int high) {
    if (high - low + 1 >= 3) {
        int pivot = list[low + 2]; 
        std::swap(list[low + 2], list[high]); 
    } else {
        // choose last el as pivot if list.size < 3
        int pivot = list[high]; 
    }
    
    int pivot = list[high]; 
    int i = (low - 1);

    for (int j = low; j < high; j++) {
        if (list[j] <= pivot) {
            i++;
            std::swap(list[i], list[j]);
        }
    }

    // Place the pivot in the correct location
    std::swap(list[i + 1], list[high]);
    
    return (i + 1);
}

void QuickSort::quickSort(std::vector<int>& list, int low, int high) {
    if (low < high) {
        int pi = partition(list, low, high); 

        quickSort(list, low, pi - 1);
        quickSort(list, pi + 1, high);
    }
}


