Node *sortedInsert(struct Node *head, int data)
{
    if (head == NULL)
    {
        return new Node(data);
    }
    Node *newNode = new Node(data);
    Node *ptr = head;
    if (head->data > data)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }
    Node *temp;
    while (ptr->data <= data && ptr->next != NULL)
    {
        temp = ptr;
        ptr = ptr->next;
    }
    if (ptr->next == NULL && ptr->data < data)
    {
        ptr->next = newNode;
        return head;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}
