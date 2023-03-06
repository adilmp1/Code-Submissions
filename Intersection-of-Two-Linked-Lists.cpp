Node *findIntersection(Node *head1, Node *head2)
{
    if (head1 == NULL || head2 == NULL)
    {
        return 0;
    }
    unordered_map<int, int> mp;
    Node *newLL = NULL;
    Node *temp;
    Node *ptr1 = head2;
    Node *ptr2 = head1;
    int i = 1;
    while (ptr1 != NULL)
    {
        mp[ptr1->data] = i++;
        ptr1 = ptr1->next;
    }
    while (ptr2 != NULL)
    {
        if (mp.find(ptr2->data) != mp.end())
        {
            if (newLL == NULL)
            {
                newLL = new Node(ptr2->data);
                temp = newLL;
            }
            else
            {
                temp->next = new Node(ptr2->data);
                temp = temp->next;
            }
        }
        ptr2 = ptr2->next;
    }
    return newLL;
}
