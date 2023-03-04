Node *insert(Node *head, int coeff, int pow)
{
    Node *ptr = head;
    Node *newNode = new Node(coeff, pow);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
    return head;
}
Node *addPolynomial(Node *head1, Node *head2)
{
    Node *ptr1 = head1;
    Node *ptr2 = head2;
    Node *head3 = NULL;
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->pow > ptr2->pow)
        {
            head3 = insert(head3, ptr1->coeff, ptr1->pow);
            ptr1 = ptr1->next;
        }
        else if (ptr1->pow < ptr2->pow)
        {
            head3 = insert(head3, ptr2->coeff, ptr2->pow);
            ptr2 = ptr2->next;
        }
        else
        {
            head3 = insert(head3, ptr2->coeff + ptr1->coeff, ptr2->pow);
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
    }
    while (ptr1 != NULL)
    {
        head3 = insert(head3, ptr1->coeff, ptr1->pow);
        ptr1 = ptr1->next;
    }
    while (ptr2 != NULL)
    {
        head3 = insert(head3, ptr2->coeff, ptr2->pow);
        ptr2 = ptr2->next;
    }
    return head3;
}
