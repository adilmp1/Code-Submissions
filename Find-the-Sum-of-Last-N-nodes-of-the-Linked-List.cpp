Node *reverse(Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    Node *next = head;
    Node *current = head;
    Node *prev = NULL;
    while (next != NULL)
    {
        next = next->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}
int sumOfLastN_Nodes(struct Node *head, int n)
{
    head = reverse(head);
    if (n == 1)
    {
        return head->data;
    }
    int curr = 1;
    int sum = 0;
    Node *ptr = head;
    while (curr != n + 1)
    {
        sum += ptr->data;
        curr++;
        ptr = ptr->next;
    }
    return sum;
}
