#include "BinaryTree.h"



BinaryTree::BinaryTree()
{

}

BinaryTree::~BinaryTree()
{

}

void BinaryTree::Insert(int data)
{
    if (m_root != nullptr)
        Insert(m_root, data);
    else
    {
        m_root = new Node(data);

    }
}

void BinaryTree::Insert(Node *root, int data)
{    
    if (root == nullptr)
    {
        root = new Node(data);
    }
    if (root->data >= data)
    {
        if(root -> left != nullptr)
            Insert(root->left, data);
        else
        {
            root->left = new Node(data);
        }
    }
    else
    {
        if (root->right != nullptr)
            Insert(root->right, data);
        else
        {
            root->right = new Node(data);
        }
    }
    
}

void BinaryTree::Delete(int data)
{

}

bool BinaryTree::Search(int data)
{
    return false;
}

void BinaryTree::PreOrderTraversal()
{
    PreOrderTraversal(m_root);
}

void BinaryTree::PreOrderTraversal(Node *root)
{
    if (root == nullptr)
    {
        return;
    }

    root->PrintNode();
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}

void BinaryTree::PostOrderTraversal()
{
    PostOrderTraversal(m_root);
}

void BinaryTree::InOrderTraversal()
{
    InOrderTraversal(m_root);
}

void BinaryTree::PostOrderTraversal(Node *root)
{
    if (root == nullptr)
        return;

    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    root->PrintNode();
}

void BinaryTree::InOrderTraversal(Node *root)
{
    if (root == nullptr)
        return;

    InOrderTraversal(root->left);
    root->PrintNode();
    InOrderTraversal(root->right);
}