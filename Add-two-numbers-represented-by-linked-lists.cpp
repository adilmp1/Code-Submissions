struct Node * insertFront(struct Node * head,int data)
{
    if(head==NULL)
    {
        return new Node(data);
    }
    else
    {
        struct Node * newNode = new Node(data);
        newNode->next = head;
        head=newNode;
        return head;
    }
}
struct Node * reverse(struct Node * head)
{
    struct Node * prev;
    struct Node * next;
    struct Node * current;
    prev=NULL;
    next=head;
    current=head;
    while(next!=NULL)
    {
        next=next->next;
        current->next = prev;
        prev=current;
        current=next;
    }
    head=prev;
    return head;
}
struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    struct Node *head3 = NULL;
    int carry=0;
    struct Node * ptr1 = reverse(first);
    struct Node * ptr2 = reverse(second);
    while(ptr1!=NULL || ptr2!=NULL)
    {
        if(ptr1!=NULL && ptr2!=NULL)
        {
            int sum = ptr1->data+ptr2->data;
            if((carry+sum)<10)
            {
                head3 = insertFront(head3,(carry+sum));
                carry=0;
            }
            else
            {
                head3 = insertFront(head3,(carry+sum)%10);
                carry=1;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        else if(ptr1!=NULL)
        {
            int sum = ptr1->data;
            if((carry+sum)<10)
            {
                head3 = insertFront(head3,(carry+sum));
                carry=0;
            }
            else
            {
                head3 = insertFront(head3,(carry+sum)%10);
                carry=1;
            }
            ptr1=ptr1->next;
        }
        else
        {
            int sum = ptr2->data;
            if((carry+sum)<10)
            {
                head3 = insertFront(head3,(carry+sum));
                carry=0;
            }
            else
            {
                head3 = insertFront(head3,(carry+sum)%10);
                carry=1;
            }
            ptr2=ptr2->next;
        }
    }
    if(carry!=0)
    {
        head3 = insertFront(head3,carry); 
    }
    return (head3);
}
