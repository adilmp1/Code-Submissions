Node *sortedMerge(Node *first, Node *second)
{
    if (first == NULL && second == NULL)
    {
        return first;
    }
    else if (first == NULL)
    {
        return second;
    }
    else if (second == NULL)
    {
        return first;
    }
    Node *answer = NULL;
    if (first->data <= second->data)
    {
        answer = first;
        answer->next = sortedMerge(first->next, second);
    }
    else
    {
        answer = second;
        answer->next = sortedMerge(first, second->next);
    }
    return answer;
}
