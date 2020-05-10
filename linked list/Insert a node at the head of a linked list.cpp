//https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list/problem

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

SinglyLinkedListNode *insertNodeAtHead(SinglyLinkedListNode *llist, int data)
{
    SinglyLinkedListNode *new_head = new SinglyLinkedListNode(data);
    new_head->next = llist;
    return new_head;
}