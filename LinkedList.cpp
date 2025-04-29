#include "LinkedList.h"
#include <iostream>
#include <limits>

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::LinkedList(int* array, int len) {
    head = nullptr;
    if (len <= 0){
        return;
    } else if (len == 1){
        Node* newNode = new Node(*array);
        head = newNode;
        return;
    } else {
        Node* newNode = new Node(*array);
        head = newNode;
        Node* dummy = head;
        for (int i = 1; i < len; i++) {
            dummy->link = new Node(*(array + i));
            dummy = dummy->link;
        }
    }
}

void LinkedList::insertPosition(int pos, int newNum) {
    if (pos <= 1 || head == nullptr) {
        Node* newNode = new Node(newNum);
        newNode->link = head;
        head = newNode;
        return;
    } else {
        int i = 1;
        Node* dummy = head;
        while (dummy->link != nullptr && i < pos - 1) {
            dummy = dummy->link;
            i++;
        }
        if (dummy->link == nullptr) {
            Node* newNode = new Node(newNum);
            dummy->link = newNode;
            return;
        } else {
            Node* newNode = new Node(newNum);
            Node* end = dummy->link;
            dummy->link = newNode;
            dummy->link->link = end;
        }
    }
}

bool LinkedList::deletePosition(int pos) {
    if (pos < 1) {
        return false;
    } else if (pos == 1) {
        Node* temp = head;
        head = head->link;
        delete temp;
        return true;
    }
    int i = 1;
    Node* dummy = head;
    while (dummy->link != nullptr && i < pos - 1) {
        i++;
        dummy = dummy->link;
    }
    if (dummy->link == nullptr) return false;
    Node* val = dummy->link;
    dummy->link = dummy->link->link;
    delete val;
    return true;
}

int LinkedList::get(int pos) {
    int i = 1;
    Node* dummy = head;
    while (dummy != nullptr && i != pos) {
        i++;
        dummy = dummy->link;
    }
    if (dummy == nullptr) return std::numeric_limits < int >::max();
    return dummy->data;
}

int LinkedList::search(int target) {
    Node* dummy = head;
    int i = 1;
    while (dummy != nullptr) {
        if (dummy->data == target) {
            return i;
        }
        i++;
        dummy = dummy->link;
    }
    return -1;
}

void LinkedList::printList() {
    Node* dummy = head;
    while (dummy != nullptr) {
        std::cout << dummy->data << " ";
        dummy = dummy->link; 
    }
    std::cout << std::endl;
}

LinkedList::~LinkedList() {
    Node* dummy = head;
    while (dummy != nullptr) {
        Node* temp = dummy;
        dummy = dummy->link;
        delete temp;
    }
}
