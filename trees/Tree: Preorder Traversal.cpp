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

void preOrder(Node *root)
{
    if (!root)
    {
        return;
    }
    std::cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}