#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int target){
    int result = searchHelper(0,list.size()-1,target,list);
    return (result == target) ? true : false;
}

int RecursiveBinarySearch::searchHelper(int start, int end, int target, std::vector<int>& list){
    int mid = start + (end - start)/2;
    if (start == end && list[start] != target) return -1;
    if (list[mid] == target){
        return list[mid];
    } else if (list[mid] > target){
        return searchHelper(start,mid-1,target,list);
    } else if (list[mid] < target){
        return searchHelper(mid+1,end,target,list);
    }
}