Node *insertFront(Node *head, int data)
{
    if (head == NULL)
    {
        return new Node(data);
    }
    else
    {
        Node *ptr = new Node(data);
        ptr->next = head;
        head = ptr;
        return head;
    }
}
bool isPalindrome(Node *head)
{
    if (head == NULL)
    {
        return true;
    }
    Node *ptr1 = head;
    Node *head2 = NULL;
    while (ptr1 != NULL)
    {
        head2 = insertFront(head2,ptr1->data);
        ptr1=ptr1->next;
    }
    ptr1 = head;
    Node * ptr2 = head2;
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->data!=ptr2->data)
        {
            return false;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return true;
}
