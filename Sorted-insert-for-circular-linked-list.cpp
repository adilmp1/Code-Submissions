        Node* newNode = new Node(data);
        if(head==NULL)
        {
            newNode->next=newNode;
            head=newNode;
            return head;
        }     
        Node *tail;
        for(tail=head;tail->next!=head;tail=tail->next);
        Node *ptr = head;
        if (head->data >= data)
        {
            newNode->next = head;
            tail->next=newNode;
            head = newNode;
            return head;
        }
        Node *temp;
        while (ptr->data <= data && ptr->next != head)
        {
            temp = ptr;
            ptr = ptr->next;
        }
        if (ptr->next == head && ptr->data < data)
        {
            ptr->next = newNode;
            newNode->next=head;
            return head;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        return head;
