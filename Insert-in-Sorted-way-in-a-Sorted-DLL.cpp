Node *createNode(int data)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}
Node *sortedInsert(Node *head, int data)
{
    Node *newNode = createNode(data);
    Node *ptr = head;
    if (head->data >= data)
    {
        newNode->next = head;
        head->prev = newNode;
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
        newNode->prev = ptr;
        return head;
    }
    temp->next->prev = newNode;
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    return head;
}
