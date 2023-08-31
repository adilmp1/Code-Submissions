struct Node *reverseList(struct Node *head, int *count)
{
    if (head == NULL)
    {
        return head;
    }
    struct Node *next = head;
    struct Node *current = head;
    struct Node *prev = NULL;
    while (next != NULL)
    {
        next = next->next;
        current->next = prev;
        prev = current;
        current = next;
        (*count)++;
    }
    head = prev;
    return head;
}
struct Node *modifyTheList(struct Node *head)
{
    int count = 0;
    int n = 0;
    stack<int> s;
    head = reverseList(head, &count);
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        if (count % 2 == 0 and n >= count / 2 || count % 2 == 1 and n > count/2)
        {
            s.push(ptr->data);
        }
        ptr = ptr->next;
        n++;
    }
    ptr = head;
    while (!s.empty())
    {
        ptr->data = ptr->data - s.top();
        ptr = ptr->next;
        s.pop();
    }
    return head;
}
