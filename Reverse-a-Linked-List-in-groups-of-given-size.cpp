Node * reverse(Node * head,int k)
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
    int i=0;
    current=head;
    while(next!=NULL && i!=k)
    {
        next=next->next;
        current->next = prev;
        prev=current;
        current=next;
        i++;
    }
    head=prev;
    if(next!=NULL)
    {
        for(int temp=1;temp<k;temp++)
        {
            prev=prev->next;
        }
        prev->next = reverse(next,k);
    }
    return head;
}
