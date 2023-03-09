Node *deleteK(Node *head, int k)
{
    if (k == 1)
    {
        return NULL;
    }
    Node *ptr = head;
    Node *temp;
    while (ptr != NULL)
    {
        int curr = 1;
        while (curr != k)
        {
            temp = ptr;
            ptr = ptr->next;
            if (ptr == NULL)
            {
                return head;
            }
            curr++;
        }
        temp->next = ptr->next;
        ptr = ptr->next;
    }
    return head;
}
