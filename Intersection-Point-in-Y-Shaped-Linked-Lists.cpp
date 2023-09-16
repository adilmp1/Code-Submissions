int intersectPoint(Node *head1, Node *head2)
{
    unordered_map<Node *, int> mp;
    Node *ptr1 = head1;
    Node *ptr2 = head2;
    while (ptr1)
    {
        mp[ptr1]++;
        ptr1 = ptr1->next;
    }
    while (ptr2)
    {
        if (mp.count(ptr2))
        {
            return ptr2->data;
        }
        ptr2 = ptr2->next;
    }
    return -1;
}
