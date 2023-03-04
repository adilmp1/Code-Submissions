int getMiddle(Node *head)
{
    if (head == NULL)
    {
        return -1;
    }
    Node *slow = head;
    Node *fast = slow->next;
    while (fast != NULL)
    {
        slow = slow->next;
        if (fast->next == NULL)
        {
            fast = NULL;
        }
        else
        {
            fast = fast->next->next;
        }
    }
    return slow->data;
}
