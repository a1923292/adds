#include <iostream>

#include "RecursiveBinarySearch.h"
#include "BubbleSort.h"
#include "QuickSort.h"

int main(void){

    std::vector<int> list;
    int num;

    while (std::cin >> num){
        list.push_back(num);
        if (std::cin.peek() == '\n'){
            break;
        }
    }   

    QuickSort quicksort;
    list = quicksort.sort(list);

    RecursiveBinarySearch binarySearch;
    std::cout << ( (binarySearch.search(list,1)) ? "true " : "false ");

    for (auto i : list){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}