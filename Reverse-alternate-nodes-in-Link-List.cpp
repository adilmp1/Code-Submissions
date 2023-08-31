void rearrange(struct Node *head)
{
    struct Node *ptr = head;
    struct Node *tail = NULL;
    struct Node *temp = NULL;
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
            }
            else
            {
                struct Node *newNode = new Node(ptr->data);
                newNode->next = tail;
                tail = newNode;
            }
        }
        else
        {
            temp = ptr;
        }
        ptr = ptr->next;
        i++;
    }
    temp->next = tail;
}
