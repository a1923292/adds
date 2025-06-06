#include "Node.h"

class LinkedList {
private:
    Node* head = nullptr;
public:
    LinkedList();
    LinkedList(int* array, int len);
    void insertPosition(int pos, int newNum);
    bool deletePosition(int pos);
    int get(int pos);
    int search(int target);
    void printList();
    ~LinkedList();
};