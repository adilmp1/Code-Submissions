Node* deleteNode(Node *head,int x)
{
    //Your code here
    if(head==NULL)
    {
        return head;
    }
    if(x==1)
    {
        head=head->next;
        return head;
    }
    Node * temp;
    Node * ptr = head;
    int current=1;
    while(current!=x && ptr->next!=NULL)
    {
        temp=ptr;
        current++;
        ptr=ptr->next;
    }
    if(current==x && ptr->next==NULL)
    {
        temp->next=NULL;
        return head;
    }
    temp->next=ptr->next;
    return head;
}
