Node * reverse(Node * head)
{
    if(head==NULL)
    {
        return head;
    }
    Node * prev;
    Node * next;
    Node * current;
    prev=NULL;
    next=head;
    current=head;
    while(next!=NULL)
    {
        next=next->next;
        current->next = prev;
        current->prev = next;
        prev=current;
        current=next;
    }
    head=prev;
    return head;
}
