#pragma once
class Node
{
public:
    Node(int value) : data(value) {}
    ~Node();

    int data = 0;
    Node *left = nullptr;
    Node *right = nullptr;

    void PrintNode();

};

