//https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/problem

#include <iostream>
class SinglyLinkedListNode
{
public:
    int data;
    SinglyLinkedListNode *next;

    SinglyLinkedListNode(int node_data)
    {
        this->data = node_data;
        this->next = nullptr;
    }
};

void reversePrint(SinglyLinkedListNode *head)
{
    if (!head)
    {
        return;
    }
    reversePrint(head->next);
    std::cout << head->data << std::endl;
}