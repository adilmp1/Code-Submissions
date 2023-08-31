struct Node *rearrangeEvenOdd(struct Node *head)
{
    struct Node *ptr = head;
    struct Node *tail = NULL;
    struct Node *temp = NULL;
    struct Node *newStarting = NULL;
    int count = 1;
    int i = 1;
    ptr = head;

    while (ptr)
    {
        if (i % 2 == 0)
        {
            temp->next = ptr->next;
            if (tail == NULL)
            {
                tail = new Node(ptr->data);
                newStarting = tail;
            }
            else
            {
                tail->next = new Node(ptr->data);
                tail = tail->next;
            }
        }
        else
        {
            temp = ptr;
        }
        ptr = ptr->next;
        i++;
    }
    temp->next = newStarting;
    return head;
}
