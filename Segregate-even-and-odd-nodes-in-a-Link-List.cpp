Node *insertFirst(Node *head, int data)
{
    if (head == NULL)
    {
        return new Node(data);
    }
    else
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        return head;
    }
}
Node *reverse(Node *head)
{
    Node *prev;
    Node *next;
    Node *current;
    prev = NULL;
    next = head;
    current = head;
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
Node *divide(int N, Node *head)
{
    Node *ptr = head;
    Node *odd = NULL;
    Node *even = NULL;
    while (ptr != NULL)
    {
        int n = ptr->data;
        if (n % 2 == 1)
        {
            odd = insertFirst(odd, n);
        }
        else
        {
            even = insertFirst(even, n);
        }
        ptr = ptr->next;
    }
    if (odd == NULL)
    {
        return reverse(even);
    }
    if (even == NULL)
    {
        return reverse(odd);
    }
    ptr = odd;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = even;
    return reverse(odd);
}
