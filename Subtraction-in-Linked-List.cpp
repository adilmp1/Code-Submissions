    Node *reverse(Node *head)
    {
        Node *next = head;
        Node *current = head;
        Node *prev = NULL;
        while (next != NULL)
        {
            next = next->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
        return head;
    } 
    Node * removeTrailingZeroes(Node * head)
    {
        Node * ptr = head;
        while(ptr->data==0 and ptr->next!=NULL) 
        {
            ptr=ptr->next;
        }
        return ptr;
    }
    int count(Node* head)
    {
        Node * ptr = head;
        int cnt=0;
        while(ptr)
        {
            ptr=ptr->next;
            cnt++;
        }
        return cnt;
    }
    int whichIsBigger(Node* head1, Node* head2)
    {
        while(head1 and head2)
        {
            if(head1->data > head2->data) return 1;
            else if(head1->data < head2->data) return 2;
            head1=head1->next;
            head2=head2->next;
        }
        return 3;
    }
    Node * helper(Node * head1, Node * head2)
    {
        Node * ans=NULL;
        Node * ansHead=ans;
        head1 = reverse(head1);
        head2 = reverse(head2);
        Node * p1 = head1;
        Node * p2 = head2;
        while(p1 or p2)
        {
            if(p2==NULL) 
            {
                if(ans==NULL)
                {
                    ans=new Node(p1->data);
                    ansHead=ans;
                }
                else
                {
                    ans->next = new Node(p1->data);
                    ans=ans->next;
                }
                p1=p1->next;
            }
            else
            {
                int x = p1->data;
                int y = p2->data;
                if(x>=y)
                {
                    if(ans==NULL)
                    {
                        ans= new Node(x-y);
                        ansHead=ans;
                    }
                    else
                    {
                        ans->next = new Node(x-y);
                        ans=ans->next;
                    }
                }
                else
                {
                    
                    if(ans==NULL)
                    {
                        ans = new Node(10+x-y);
                        ansHead=ans;
                    }
                    else
                    {
                        ans->next = new Node(10+x-y);
                        ans=ans->next;
                    }
                    Node * temp = p1->next;
                    while(temp)
                    {
                        if(temp->data==0)
                        {
                            temp->data=9;
                        }
                        else if(temp->data >0)
                        {
                            temp->data--;
                            break;
                        }
                        temp=temp->next;
                    }
                }
                p1=p1->next;
                p2=p2->next;
                // if(p2!=NULL) p2=p2->next;
            }
        }
        return removeTrailingZeroes(reverse(ansHead));
    }
    Node* subLinkedList(Node* head1, Node* head2) {
        head1 = removeTrailingZeroes(head1);
        head2 = removeTrailingZeroes(head2);
        int c1 = count(head1);
        int c2 = count(head2);
        if(c1>c2) return helper(head1,head2);
        if(c1<c2) return helper(head2,head1);
        if(whichIsBigger(head1,head2)==1) return helper(head1,head2);
        else if(whichIsBigger(head1,head2)==2) return helper(head2,head1);
        return new Node(0);
    }
