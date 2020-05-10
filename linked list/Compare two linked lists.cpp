//https://www.hackerrank.com/challenges/compare-two-linked-lists/problem

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

bool compare_lists(SinglyLinkedListNode *head1, SinglyLinkedListNode *head2)
{
    if (!head1 && !head2)
    {
        return true;
    }
    while (head1 && head2)
    {
        if (head1->data != head2->data)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    if (head1 || head2)
    {
        return false;
    }
    return true;
}