Node * inOrderSuccessor(Node * root)
{
    while(root->left)
    {
        root=root->left;
    }
    return root;
}
Node *deleteNode(Node *root, int x) 
{
    if(root==NULL)
    {
        return NULL;
    }
    else if(root->data >x)
    {
        root->left = deleteNode(root->left,x);
    }
    else if(root->data <x)
    {
        root->right = deleteNode(root->right,x);
    }
    else
    {
        if(root->left==NULL)
        {
            root=root->right;
        }
        else if(root->right==NULL)
        {
            root=root->left;
        }
        else
        {
            Node * temp = inOrderSuccessor(root->right);
            root = deleteNode(root,temp->data);
            root->data=temp->data;
        }
    }
    return root;
}
