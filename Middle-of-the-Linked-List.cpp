ListNode * middleNode(ListNode *head)
{
    if (head == NULL || head->next==NULL)
    {
        return head;
    }
    ListNode * slow = head;
    ListNode * fast = slow->next;
    while(fast!=NULL)
    {
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
    return slow;
}
