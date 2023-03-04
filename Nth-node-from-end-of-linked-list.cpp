Node* reverse(Node* head)
{
    Node* current = head;
    Node* next = head;
    Node* prev = NULL;
    while(next!=NULL)
    {
        next=next->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}
int getNthFromLast(Node* head, int n)
{
    if(head==NULL)
    {
        return -1;
    }
    head = reverse(head);
    Node* ptr = head;
    if(n==1)
    {
        return ptr->data;
    }
    else
    {
        int current = 1;
        while(current!=n && ptr!=NULL)
        {      
            ptr=ptr->next;
            current++;
        }
        if(ptr==NULL)
        {
            return -1;
        }
        return ptr->data;
        
    }
}
