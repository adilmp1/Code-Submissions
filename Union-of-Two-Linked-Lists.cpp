void FindMiddle(Node *cur, Node **first, Node **second)
{
    Node *slow = cur;
    Node *fast = cur->next;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    *first = cur;
    *second = slow->next;
    slow->next = NULL;
}
Node *merge(Node *first, Node *second)
{
    Node *answer = NULL;
    if (first == NULL)
    {
        return second;
    }
    else if (second == NULL)
    {
        return first;
    }
    if (first->data <= second->data)
    {
        answer = first;
        answer->next = merge(first->next, second);
    }
    else
    {
        answer = second;
        answer->next = merge(first, second->next);
    }
}
void MergeSorting(Node **head)
{
    Node *cur = *head;
    Node *first;
    Node *second;
    if (cur == NULL || cur->next == NULL)
    {
        return;
    }
    FindMiddle(cur, &first, &second);
    MergeSorting(&first);
    MergeSorting(&second);
    *head = merge(first, second);
}
Node *mergeSort(Node *head)
{
    MergeSorting(&head);
    return head;
}
struct Node *makeUnion(struct Node *first, struct Node *second)
{

    if (first == NULL && second == NULL)
    {
        return first;
    }
    unordered_map<int, int> mp;
    struct Node *head = NULL;
    Node *ptr1 = first;
    Node *ptr2 = second;
    int i = 1;
    while (ptr1 != NULL)
    {
        mp[ptr1->data] = i++;
        ptr1 = ptr1->next;
    }
    while (ptr2 != NULL)
    {
        mp[ptr2->data] = i++;
        ptr2 = ptr2->next;
    }
    ptr2 = first;
    Node *temp = head;
    while (ptr2 != NULL)
    {
        if (mp.find(ptr2->data) != mp.end())
        {
            if (head == NULL)
            {
                head = new Node(ptr2->data);
                temp = head;
            }
            else
            {
                temp->next = new Node(ptr2->data);
                temp = temp->next;
            }
            mp.erase(ptr2->data);
        }
        ptr2 = ptr2->next;
    }
    ptr2 = second;
    while (ptr2 != NULL)
    {
        if (mp.find(ptr2->data) != mp.end())
        {
            if (head == NULL)
            {
                head = new Node(ptr2->data);
                temp = head;
            }
            else
            {
                temp->next = new Node(ptr2->data);
                temp = temp->next;
            }
            mp.erase(ptr2->data);
        }
        ptr2 = ptr2->next;
    }
    return mergeSort(head);
}
