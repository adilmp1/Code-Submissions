int GetNth(struct node *head, int index)
{
    if (index == 1)
    {
        return head->data;
    }
    struct node *ptr = head;
    int curr = 1;
    while (curr != index && ptr != NULL)
    {
        ptr = ptr->next;
        curr++;
    }
    return ptr->data;
}
