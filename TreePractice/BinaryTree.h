#pragma once

#include "Node.h"
class BinaryTree
{
    Node *m_root = nullptr;

    void Insert(Node *root, int data);

    void PreOrderTraversal(Node *root);

    void PostOrderTraversal(Node *root);

    void InOrderTraversal(Node *root);


public:
    BinaryTree();
    ~BinaryTree();
    
    void Delete(int data);

    bool Search(int data);

    void PreOrderTraversal();

    void PostOrderTraversal();

    void InOrderTraversal();

    void Insert(int data); 

    void LevelOrderTraveral();
};

