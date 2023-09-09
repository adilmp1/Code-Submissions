bool detectLoop(Node *head)
{
    Node *ptr = head;
    unordered_map<Node *, int> mp;
    while (ptr != NULL)
    {
        if (!mp.count(ptr))
        {
            mp[ptr]++;
        }
        else
        {
            return true;
        }
        ptr = ptr->next;
    }
    return false;
}
