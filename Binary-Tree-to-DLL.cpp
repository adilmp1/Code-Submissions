    Node *head,*prev=NULL;
    void helper(Node * root)
    {
        if(root==NULL) return;
        helper(root->left);
        if(prev==NULL)
        {
            head=prev=root;
        }
        else
        {
            prev->right=root;
            root->left=prev;
        }
        prev=root;
        helper(root->right);
    }
    Node * bToDLL(Node *root)
    {
        helper(root);
        return head;
    }
