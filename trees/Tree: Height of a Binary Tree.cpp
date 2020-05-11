//https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/problem

#include <algorithm>
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

int height(Node *root)
{
    if (!root || (!root->left && !root->right))
    {
        return 0;
    }
    return (1 + std::max(height(root->left), height(root->right)));
}
