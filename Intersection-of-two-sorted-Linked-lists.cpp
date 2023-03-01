Node *insertLast(Node *head, int data)
{
    if (head == NULL)
    {
        return new Node(data);
    }
    else
    {
        Node *newNode = new Node(data);
        Node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newNode;
        return head;
    }
}
Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node * head3=NULL;
    if(head1==NULL || head2==NULL)
    {
        return NULL;
    }
    Node * ptr1 = head1;
    Node * ptr2 = head2;
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->data==ptr2->data)
        {
            head3 = insertLast(head3,ptr1->data);
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        else if(ptr1->data > ptr2->data)
        {
            ptr2=ptr2->next;
        }
        else
        {
            ptr1=ptr1->next;
        }
    }
    return head3;
}
