Node * deleteMid(Node *head)
{
    if (head == NULL || head->next==NULL)
    {
        return NULL;
    }
    Node * slow = head;
    Node * fast = slow->next;
    Node * temp;
    while(fast!=NULL)
    {
        temp=slow;
        slow=slow->next;
        if(fast->next==NULL)
        {
            fast=NULL;
        }
        else
        {
            fast=fast->next->next;
        }
    }
    temp->next = slow->next;
    return head;
}
