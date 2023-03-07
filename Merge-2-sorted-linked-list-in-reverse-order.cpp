struct Node *insertFirst(struct Node *head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    if (head == NULL)
    {
        return newNode;
    }
    newNode->next = head;
    head = newNode;
    return head;
}
struct Node *mergeResult(struct Node *first, struct Node *second)
{
    if (first == NULL && second == NULL)
    {
        return first;
    }
    struct Node *head = NULL;
    while (first != NULL && second != NULL)
    {
        if (first->data <= second->data)
        {
            head = insertFirst(head, first->data);
            first = first->next;
        }
        else
        {
            head = insertFirst(head, second->data);
            second = second->next;
        }
    }
    while (first != NULL)
    {
        head = insertFirst(head, first->data);
        first = first->next;
    }
    while (second != NULL)
    {
        head = insertFirst(head, second->data);
        second = second->next;
    }
    return head;
}
