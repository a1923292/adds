#pragma once

class Node {
public:
    int data;
    Node* link;
    Node(int data_) : data(data_), link(nullptr) {}    
    Node(int data_, Node* link_) : data(data_), link(link_) {}    
};