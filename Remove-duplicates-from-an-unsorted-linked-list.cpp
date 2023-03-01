Node * removeDuplicates(Node * head)
{
    if(head==NULL)
    {
        return head;
    }
    Node * ptr = head;
    while(ptr->next!=NULL)
    {
        if(ptr->data==ptr->next->data)
        {
            Node * next;
            if(ptr->next->next!=NULL)
            {
                next = ptr->next->next;
            }
            else
            {
                next = NULL;
                ptr->next=next;
                break;
            }
            ptr->next=next;
        }
        if(ptr->data!=ptr->next->data)
        {
            ptr=ptr->next;
        }
    }
    return head;
}
