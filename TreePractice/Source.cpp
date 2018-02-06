#include <iostream>
#include <string>

#include "BinarySearchTree.h"

using namespace std;

int main()
{
    BinarySearchTree bt;

    bt.Insert(10);
    bt.Insert(8);
    bt.Insert(9);
    bt.Insert(7);
    bt.Insert(12);
    bt.Insert(14);
    bt.Insert(12);
    bt.Insert(10);


    string sTree = R"(
                                            10
                            8                          12
                       7         9              12            14
                                    10)";
                                    
    cout << "The tree is : " << sTree << endl;

    cout << endl << "Pre Order Traversal" << endl;
    
    bt.PreOrderTraversal();

    cout << endl << "Post Order Traversal" << endl;

    bt.PostOrderTraversal();

    cout << endl << "In Order Traversal" << endl;

    bt.InOrderTraversal();

    cout << endl << "Level Order Traversal" << endl;

    bt.LevelOrderTraveral();

    int iSearchKey = 0;
    cout << "Enter a number to search : " << endl;
    cin >> iSearchKey;

    if (bt.Search(iSearchKey) == true)
        cout << iSearchKey << " found in the tree" << endl;
    else
        cout << iSearchKey << " not found in the tree" << endl;

    cout << "End of program";
}