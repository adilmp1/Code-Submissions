Node *removeDuplicates(Node *head)
{
    Node *answer = NULL;
    Node *temp;
    if (head == NULL)
    {
        return head;
    }
    unordered_map<int, int> mp;
    Node *ptr = head;
    while (ptr != NULL)
    {
        int val = ptr->data;
        if (mp.find(val) == mp.end())
        {
            mp[val]++;
        }
        ptr = ptr->next;
    }
    ptr = head;
    while (ptr != NULL)
    {
        int value = ptr->data;
        if (mp.find(value) != mp.end())
        {
            if (answer == NULL)
            {
                answer = new Node(value);
                temp = answer;
            }
            else
            {
                temp->next = new Node(value);
                temp = temp->next;
            }
            mp.erase(value);
        }
        ptr = ptr->next;
    }
    return answer;
}
