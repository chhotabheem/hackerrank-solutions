//https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists/problem

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

SinglyLinkedListNode *mergeLists(SinglyLinkedListNode *head1, SinglyLinkedListNode *head2)
{
    if (!head1)
    {
        return head2;
    }
    if (!head2)
    {
        return head1;
    }
    SinglyLinkedListNode temp(0);
    SinglyLinkedListNode *curr = &temp;
    while (head1 && head2)
    {
        if (head1->data <= head2->data)
        {
            curr->next = head1;
            head1 = head1->next;
        }
        else
        {
            curr->next = head2;
            head2 = head2->next;
        }
        curr = curr->next;
    }
    if (head1)
    {
        curr->next = head1;
    }
    if (head2)
    {
        curr->next = head2;
    }
    return temp.next;
}