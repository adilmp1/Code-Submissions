void MergeSorting(Node **head)
{
    Node *cur = *head;
    Node *first;
    Node *second;
    if (cur == NULL || cur->next == NULL)
    {
        return;
    }
    FindMiddle(cur, &first, &second);
    MergeSorting(&first);
    MergeSorting(&second);
    *head = merge(first, second);
}
void FindMiddle(Node *cur, Node **first, Node **second)
{
    Node *slow = cur;
    Node *fast = cur->next;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    *first = cur;
    *second = slow->next;
    slow->next = NULL;
}
Node *merge(Node *first, Node *second)
{
    Node *answer = NULL;
    if (first == NULL)
    {
        return second;
    }
    else if (second == NULL)
    {
        return first;
    }
    if (first->data <= second->data)
    {
        answer = first;
        answer->next = merge(first->next, second);
    }
    else
    {
        answer = second;
        answer->next = merge(first, second->next);
    }
}
Node *mergeSort(Node *head)
{
    MergeSorting(&head);
    return head;
}
