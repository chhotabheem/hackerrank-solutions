//https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem

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

SinglyLinkedListNode *insertNodeAtTail(SinglyLinkedListNode *head, int data)
{
    SinglyLinkedListNode *new_node = new SinglyLinkedListNode(data);
    if (!head)
    {
        return new_node;
    }
    SinglyLinkedListNode *curr = head;
    while (curr->next)
    {
        curr = curr->next;
    }
    curr->next = new_node;
    return head;
}