int isLengthEvenOrOdd(struct Node *head)
{
    int count = 0;
    for (Node *ptr = head; ptr != NULL; ptr = ptr->next)
    {
        count++;
    }
    if (count % 2 == 0)
    {
        return 0;
    }
    return 1;
}
