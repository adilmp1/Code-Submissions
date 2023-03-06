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
Node * middleNode(Node *head)
{
    if (head == NULL || head->next==NULL)
    {
        return head;
    }
    Node * slow = head;
    Node * temp=slow;
    Node * fast = slow->next;
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
    if(getCount(head)%2==0)
    {
        return temp;
    }
    return slow;
}
Node* insertInMiddle(Node* head, int x)
{
	Node * mid = middleNode(head);
	Node * newNode = new Node(x);
	newNode->next = mid->next;
	mid->next = newNode;
	return head;
}
