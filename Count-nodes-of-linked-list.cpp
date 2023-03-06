int getCount(struct Node* head)
{
    if(head==NULL)
    {
        return 0;
    }
    else
    {
        Node * temp = head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        return count;
    }
}
