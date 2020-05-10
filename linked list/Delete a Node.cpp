//https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem

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

SinglyLinkedListNode *deleteNode(SinglyLinkedListNode *head, int position)
{
    if (!head || position < 0)
    {
        return head;
    }
    if (!position)
    {
        SinglyLinkedListNode *new_head = head->next;
        delete head;
        return new_head;
    }
    --position;
    SinglyLinkedListNode *prev = head;
    SinglyLinkedListNode *curr = head->next;
    while (position && curr)
    {
        prev = curr;
        curr = curr->next;
        --position;
    }
    if (position || !curr)
    {
        return head;
    }
    prev->next = curr->next;
    delete curr;
    return head;
}
