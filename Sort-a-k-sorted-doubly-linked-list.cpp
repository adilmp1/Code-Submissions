DLLNode *sortAKSortedDLL(DLLNode *head, int k)
{
    multiset<int> s;
    DLLNode *ptr = head;
    while (ptr)
    {
        s.insert(ptr->data);
        ptr = ptr->next;
    }
    ptr = head;
    for (auto it : s)
    {
        ptr->data = it;
        ptr = ptr->next;
    }
    return head;
}
