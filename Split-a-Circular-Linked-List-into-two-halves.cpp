int counter(Node *head)
{
    if (head == NULL)
        return 0;

    Node *ptr = head;
    int count = 1;
    while (ptr->next != head)
    {
        count++;
        ptr = ptr->next;
    }
    return count;
}
Node *middleNode(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *slow = head;
    Node *fast = slow->next;
    while (fast != head)
    {
        slow = slow->next;
        if (fast->next == head)
        {
            fast = head;
        }
        else
        {
            fast = fast->next->next;
        }
    }
    if (counter(head) % 2 == 0)
    {
        return slow;
    }
    return slow->next;
}
void splitList(Node *head, Node **head1, Node **head2)
{
    if (head == NULL)
    {
        return;
    }
    Node *mid = middleNode(head);
    Node *ptr1 = head;
    while (ptr1->next != mid)
    {
        ptr1 = ptr1->next;
    }
    ptr1->next = head;
    ptr1 = mid;
    while (ptr1->next != head)
    {
        ptr1 = ptr1->next;
    }
    ptr1->next = mid;
    *head1 = head;
    *head2 = mid;
}
