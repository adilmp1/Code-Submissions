void inOrderStore(vector<int>& b,Node * root)
{
    if(root!=NULL)
    {
        inOrderStore(b,root->left);
        b.push_back(root->data);
        inOrderStore(b,root->right);
    }
}
Node * helper(vector<int>& b, int start,int end)
{
    if(start>end) return NULL;
    int mid = (start+end)/2;
    Node * root = new Node(b[mid]);
    root->left = helper(b,start,mid-1);
    root->right = helper(b,mid+1,end);
    return root;
}
Node *buildBalancedTree(Node *root)
{
    vector<int> b;
    inOrderStore(b,root);
    return helper(b,0,b.size()-1);
}
