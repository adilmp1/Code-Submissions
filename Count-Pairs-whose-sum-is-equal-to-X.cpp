int countPairs(struct Node *head1, struct Node *head2, int x)
{
    if (head1 == NULL || head2 == NULL)
    {
        return 0;
    }
    unordered_map<int, int> mp;
    struct Node *ptr1 = head1;
    struct Node *ptr2 = head2;
    int i = 1, count = 0;
    while (ptr1 != NULL)
    {
        mp[ptr1->data] = i++;
        ptr1 = ptr1->next;
    }
    while (ptr2 != NULL)
    {
        if (mp.find(x - ptr2->data) != mp.end())
        {
            count++;
        }
        ptr2 = ptr2->next;
    }
    return count;
}
