long long multiplyTwoLists(Node *l1, Node *l2)
{
    long long mod = 1e9 + 7;
    long long val1 = 0;
    long long val2 = 0;
    while (l1 != NULL)
    {
        val1 = (val1 * 10 + l1->data) % mod;
        l1 = l1->next;
    }
    while (l2 != NULL)
    {
        val2 = (val2 * 10 + l2->data) % mod;
        l2 = l2->next;
    }
    return (val1 * val2) % mod;
}
