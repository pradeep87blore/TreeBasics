#pragma once

#include "Node.h"
class BinarySearchTree
{
    Node *m_root = nullptr;

    void Insert(Node *root, int data);

    void PreOrderTraversal(Node *root);

    void PostOrderTraversal(Node *root);

    void InOrderTraversal(Node *root);

    // void DeleteTree(Node *root);

    Node* Search(int data, Node *root);

    int HeightOfNode(Node* node);

    // void DeleteNode(int data, Node *node);

public:
    BinarySearchTree();
    ~BinarySearchTree();
    
    //void Delete(int data); // Not implemented yet

    bool Search(int data);

    void Insert(int data);

    void PreOrderTraversal();

    void PostOrderTraversal();

    void InOrderTraversal();

    void LevelOrderTraveral();

    // void DeleteTree();

    int HeightOfTree();
};

