//https://www.hackerrank.com/challenges/tree-inorder-traversal/problem

#include <iostream>

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

void inOrder(Node *root)
{
    if (!root)
    {
        return;
    }
    inOrder(root->left);
    std::cout << root->data << " ";
    inOrder(root->right);
}
