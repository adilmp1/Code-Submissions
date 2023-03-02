ListNode * moveToFront(ListNode * head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    ListNode * ptr = head;
    ListNode *temp;
    while(ptr->next!=NULL)
    {
        temp = ptr;
        ptr=ptr->next;
    }
    temp->next=NULL;
    ptr->next=head;
    head=ptr;
    return head;
}
