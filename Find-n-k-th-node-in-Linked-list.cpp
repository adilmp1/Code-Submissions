int fractional_node(struct Node *head, int k)
{
    int length = 0;
    for (Node *ptr = head; ptr != NULL; ptr = ptr->next)
    {
        length++;
    }
    int nbyk = (length + k - 1) / k;
    int curr = 1;
    if (nbyk == 1)
    {
        return head->data;
    }
    else
    {
        Node *ptr = head;
        while (ptr != NULL && curr != nbyk)
        {
            curr++;
            ptr = ptr->next;
        }
        return ptr->data;
    }
}
