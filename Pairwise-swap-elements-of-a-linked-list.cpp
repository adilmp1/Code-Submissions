Node *pairWiseSwap(struct Node *head)
{
    if (head->next == NULL)
        return head;
    Node *ptr = head;
    Node *start = NULL;
    Node *beforeStart = NULL;
    Node *afterStart = head;
    Node *tail = NULL;
    while (afterStart != NULL)
    {
        beforeStart = afterStart;
        start = afterStart->next;
        if (start != NULL)
        {
            afterStart = start->next;
        }
        else
        {
            afterStart = NULL;
        }
        if (tail == NULL)
        {
            tail = start;
            head = tail;
        }
        else
        {
            tail->next = start;
            if (start != NULL)
            {
                tail = tail->next;
            }
        }
        tail->next = beforeStart;
        if (beforeStart)
        {
            tail = tail->next;
        }
    }
    tail->next = NULL;
    return head;
}
