#include "BinarySearchTree.h"
#include <queue>

using namespace std;

BinarySearchTree::BinarySearchTree()
{

}

BinarySearchTree::~BinarySearchTree()
{
    DeleteTree(); // Clean the memory up
}

void BinarySearchTree::Insert(int data)
{
    if (m_root != nullptr)
        Insert(m_root, data);
    else
    {
        m_root = new Node(data);

    }
}

void BinarySearchTree::Insert(Node *root, int data)
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

void BinarySearchTree::Delete(int data)
{

}

void BinarySearchTree::PreOrderTraversal()
{
    PreOrderTraversal(m_root);
}

void BinarySearchTree::PreOrderTraversal(Node *root)
{
    if (root == nullptr)
    {
        return;
    }

    root->PrintNode();
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}

void BinarySearchTree::PostOrderTraversal()
{
    PostOrderTraversal(m_root);
}

void BinarySearchTree::InOrderTraversal()
{
    InOrderTraversal(m_root);
}

void BinarySearchTree::PostOrderTraversal(Node *root)
{
    if (root == nullptr)
        return;

    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    root->PrintNode();
}

void BinarySearchTree::InOrderTraversal(Node *root)
{
    if (root == nullptr)
        return;

    InOrderTraversal(root->left);
    root->PrintNode();
    InOrderTraversal(root->right);
}

void BinarySearchTree::LevelOrderTraveral()
{
    queue<Node*> levelQ;

    auto temp = m_root;
    levelQ.push(temp);
    while (temp != nullptr)
    {
        if (!levelQ.empty())
        {
            temp = levelQ.front();
            levelQ.pop();
        }
        else
            break;

        temp->PrintNode();
        if (temp->left != nullptr)
        {
            levelQ.push(temp->left);
        }
        if (temp->right != nullptr)
        {
            levelQ.push(temp->right);
        }        
    }
}

void BinarySearchTree::DeleteTree()
{
    DeleteTree(m_root);
    m_root = nullptr;
}

void BinarySearchTree::DeleteTree(Node *root)
{
    if (root == nullptr)
        return; // Base case

    DeleteTree(root->left);
    DeleteTree(root->right);
    delete root;
}

bool BinarySearchTree::Search(int data)
{
    Node *node = Search(data, m_root);
    return (node != nullptr); // If a non-null node received, the value was found in the tree, else it was not.
}

Node* BinarySearchTree::Search(int data, Node *root)
{
    if (root == nullptr)
        return nullptr;

    if (root->data == data)
        return root;

    if (root->data > data)
        return Search(data, root->left);
    else
        return Search(data, root->right);
}