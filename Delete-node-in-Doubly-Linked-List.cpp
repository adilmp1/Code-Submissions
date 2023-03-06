Node *deleteNode(Node *head, int x)
{
    if (head == NULL)
    {
        return head;
    }
    if (x == 1)
    {
        head = head->next;
        return head;
    }
    int curr = 1;
    Node *ptr = head;
    Node *temp = head;
    while (ptr->next != NULL && curr != x)
    {
        temp = ptr;
        ptr = ptr->next;
        curr++;
    }
    if (ptr->next == NULL)
    {
        temp->next = NULL;
        return head;
    }
    ptr->prev->next = ptr->next;
    ptr->next->prev = ptr->prev;
    return head;
}
