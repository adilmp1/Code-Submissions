void removeLoop(Node *head)
{
    unordered_map<Node *, int> mp;
    Node *ptr = head;
    mp[ptr] = 1;
    while (ptr)
    {
        if (mp.find(ptr->next) != mp.end())
        {
            ptr->next = NULL;
        }
        else
        {
            mp[ptr->next]++;
        }
        ptr = ptr->next;
    }
}
