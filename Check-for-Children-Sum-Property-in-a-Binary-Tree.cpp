    int isSumProperty(Node *root)
    {
        if(root==NULL) return true;
        if(root->left==NULL and root->right==NULL) return true; 
        int lvalue=0,rvalue=0;
        if(root->left!=NULL) lvalue=root->left->data;
        if(root->right!=NULL) rvalue=root->right->data;
        if(root->data == lvalue+rvalue) return (isSumProperty(root->left) and isSumProperty(root->right));
        return false;
    }
