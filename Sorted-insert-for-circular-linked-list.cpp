Node *sortedInsert(Node *head, int data)
{
    Node *newNode = new Node(data);
    Node *var;
    Node *ptr = head;
    if (head->data > data)
    {
        newNode->next = head;
        for (var = head; var->next != head; var = var->next)
            ;
        head = newNode;
        var->next = head;
        return head;
    }
    Node *temp;
    while (ptr->data <= data && ptr->next != head)
    {
        temp = ptr;
        ptr = ptr->next;
    }
    if (ptr->next == head && ptr->data < data)
    {
        ptr->next = newNode;
        newNode->next = head;
        return head;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}
