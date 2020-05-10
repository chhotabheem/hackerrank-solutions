//https://www.hackerrank.com/challenges/reverse-a-linked-list/problem

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

SinglyLinkedListNode *reverse(SinglyLinkedListNode *head)
{
    SinglyLinkedListNode *prev = nullptr;
    while (head)
    {
        SinglyLinkedListNode *temp = head->next;
        head->next = prev;
        prev = head;
        head = temp;
    }
    return prev;
}