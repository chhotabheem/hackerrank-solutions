//https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list/problem

#include <iostream>
struct SinglyLinkedListNode
{
    int data;
    SinglyLinkedListNode *next;
};

void printLinkedList(SinglyLinkedListNode *head)
{
    while (head)
    {
        std::cout << head->data << std::endl;
        head = head = head->next;
    }
}