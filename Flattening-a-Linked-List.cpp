Node *AddWithSort(Node *head, int data)
{

    if(head==NULL)
    {
        return new Node(data);
    }
    Node *ptr = head;
    Node *temp = head;
    Node *newNode = new Node(data);
    if (head->data > data)
    {
        newNode->bottom = head;
        head = newNode;
        return head;
    }
    while (ptr->data < data && ptr->bottom!= NULL)
    {
        temp = ptr;
        ptr = ptr->bottom;
    }
    if (ptr->data < data)
    {
        ptr->bottom = newNode;
        return head;
    }
    newNode->bottom = temp->bottom;
    temp->bottom = newNode;
    return head;
}
Node *flatten(Node *head)
{
    if (head == NULL || head->bottom == NULL && head->next == NULL)
    {
        return head;
    }
    Node *ptr = head;
    Node *bt;
    while (ptr->next != NULL)
    {
        bt = ptr->next;
        while (bt != NULL)
        {
            head = AddWithSort(head, bt->data);
            bt = bt->bottom;
        }
        ptr = ptr->next;
    }
    return head;
}
