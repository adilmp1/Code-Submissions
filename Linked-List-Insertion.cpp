Node *insertAtBegining(Node *head, int x) {
   if(head==NULL)
   {
       head = new Node(x);
   }
   else
   {
       Node * newNode = new Node(x);
       newNode->next = head;
       head=newNode;
   }
   return head;
}

Node *insertAtEnd(Node *head, int x)  {
    Node * newNode = new Node(x);
    if(head==NULL)
    {
        head=newNode;
    }
    else
    {
        Node * temp = head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
    }
    return head;
}
