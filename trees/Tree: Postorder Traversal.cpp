//https://www.hackerrank.com/challenges/tree-postorder-traversal/problem
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

void postOrder(Node *root)
{
    if (!root)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    std::cout << root->data << " ";
}