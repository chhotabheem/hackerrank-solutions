//https://www.hackerrank.com/challenges/tree-level-order-traversal/problem

#include <iostream>
#include <queue>

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

void levelOrder(Node *root)
{
    if (!root)
    {
        return;
    }
    std::queue<Node *> que;
    que.push(root);
    while (!que.empty())
    {
        Node *node = que.front();
        que.pop();
        std::cout << node->data << " ";
        if (node->left)
        {
            que.push(node->left);
        }
        if (node->right)
        {
            que.push(node->right);
        }
    }
}