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
Node * addOne(Node * head)
{
    int carry=1;
    if(head==NULL)
    {
        return head;
    }
    head=reverse(head);
    Node * temp;
    Node * ptr = head;
    while(ptr!=NULL)
    {
        if(ptr->data == 9)
        {
            ptr->data+=carry;
            if(ptr->data == 10)
            {
                ptr->data =0;
                carry=1;
            }
        }
        else
        {
            ptr->data = ptr->data+carry;
            carry=0;
        }
        temp=ptr;
        ptr=ptr->next;
    }
    if(carry==1)
    {
        temp->next = new Node(1);
    }
    return reverse(head);
}
