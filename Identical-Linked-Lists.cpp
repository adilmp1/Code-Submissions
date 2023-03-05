bool areIdentical(struct Node *head1, struct Node *head2)
{
    struct Node * ptr1 = head1;
    struct Node * ptr2 = head2;
    while(ptr1!=NULL || ptr2!=NULL)
    {
        
        if((ptr1==NULL && ptr2!=NULL)||(ptr1!=NULL && ptr2==NULL))
        {
            return false;
        }
        if(ptr1->data!=ptr2->data)
        {
            return false;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return true;
}
