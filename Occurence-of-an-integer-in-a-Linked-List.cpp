int count(struct node *head, int search_for)
{
    // add your code here
    struct node *ptr = head;
    int count = 0;
    while (ptr != NULL)
    {
        if (ptr->data == search_for)
        {
            count++;
        }
        ptr = ptr->next;
    }
    return count;
}
