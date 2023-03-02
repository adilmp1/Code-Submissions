Node *reverseList(Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    Node *next = head;
    Node *current = head;
    Node *prev = NULL;
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
