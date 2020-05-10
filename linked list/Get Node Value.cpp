//https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail/problem

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

int getNode(SinglyLinkedListNode *head, int positionFromTail)
{
    SinglyLinkedListNode *fast = head;
    while (positionFromTail && fast)
    {
        fast = fast->next;
        --positionFromTail;
    }
    if (positionFromTail || !fast)
    {
        return head->data;
    }
    while (fast->next)
    {
        fast = fast->next;
        head = head->next;
    }
    return head->data;
}