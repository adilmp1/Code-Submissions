Node *rotate(Node *head, int k)
{
    if (head == NULL)
    {
        return head;
    }
    int current = 0;
    Node *ptr = head;
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (ptr != NULL && current != k)
    {
        head = head->next;
        temp->next = new Node(ptr->data);
        temp = temp->next;
        current++;
        ptr = ptr->next;
    }
    return head;
}
