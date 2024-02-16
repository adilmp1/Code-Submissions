    Node * ans=NULL;
    Node * prev = NULL;
    void helper(Node * root)
    {
        if(!root) return;
        helper(root->right);
        root->right=prev;
        prev=root;
        ans=root;
        helper(root->left);
    }
    void removeLeft(Node * root)
    {
        if(!root) return;
        root->left=NULL;
        removeLeft(root->right);
    }
    Node *flattenBST(Node *root)
    {
        helper(root);
        removeLeft(ans);
        return ans;
    }
