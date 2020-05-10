//https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list/problem

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

SinglyLinkedListNode *insertNodeAtPosition(SinglyLinkedListNode *head, int data, int position)
{
    if (position < 0)
    {
        return head;
    }
    if (!head && position > 0)
    {
        return head;
    }
    SinglyLinkedListNode *new_node = new SinglyLinkedListNode(data);
    if (!head)
    {
        return new_node;
    }
    if (!position)
    {
        new_node->next = head;
        return new_node;
    }
    SinglyLinkedListNode *prev = head;
    SinglyLinkedListNode *curr = head->next;
    --position;
    while (position && curr)
    {
        prev = curr;
        curr = curr->next;
        --position;
    }
    if (!curr && position)
    {
        delete new_node;
        return head;
    }
    prev->next = new_node;
    new_node->next = curr;
    return head;
}