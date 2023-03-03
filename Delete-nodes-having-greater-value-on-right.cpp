Node *reverse(Node *head)
{
    Node *prev;
    Node *next;
    Node *current;
    prev = NULL;
    next = head;
    current = head;
    while (next != NULL)
    {
        next = next->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}
Node *compute(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    head = reverse(head);
    Node *ptr = head;
    Node *temp = head;
    int min = head->data;
    while (ptr != NULL)
    {
        if (min <= ptr->data)
        {
            min = ptr->data;
            temp = ptr;
            ptr = ptr->next;
        }
        else
        {
            temp->next = ptr->next;
            ptr = ptr->next;
        }
    }
    head = reverse(head);
    return head;
}
