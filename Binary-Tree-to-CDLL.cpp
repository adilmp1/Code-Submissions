    Node * head=NULL,*prev=NULL;
    void helper(Node* curr)
    {
        if(curr==NULL)
        {
            return;
        }
        helper(curr->left);
        if(head==NULL)
        {
            head=prev=curr;
        }
        else
        {
            prev->right=curr;
            curr->left=prev;
        }
        prev=curr;
        helper(curr->right);
    }
    
    Node *bTreeToCList(Node *root)
    {
        helper(root);
        head->left=prev;
        prev->right=head;
        return head;
    }
