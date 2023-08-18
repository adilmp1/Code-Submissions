void leftBoundary(Node * root,vector<int>& ans)
{
    
    if(ans.size()==0 && root->left==NULL)
    {
        if(!(root->left==NULL && root->right==NULL))
            ans.push_back(root->data);
        return;
    }
    if(root==NULL || root->left==NULL && root->right==NULL)
    {
        return;
    }
    while(root->left!=NULL)
    {
        ans.push_back(root->data);
        root=root->left;
    }
    if(root->right!=NULL)
    {
        ans.push_back(root->data);
    }
    leftBoundary(root->right,ans);
}
void rightBoundary(Node * root,vector<int>& right)
{
    if(right.size()==0 && root->right==NULL)
    {
        return;
    }
    if(root==NULL || root->left==NULL && root->right==NULL)
    {
        return;
    }
    while(root->right!=NULL)
    {
        right.push_back(root->data);
        root=root->right;
    }
    if(root->left!=NULL)
    {
        right.push_back(root->data);
    }
    rightBoundary(root->left,right);
}

void leafNodes(Node* root,vector<int>& ans)
{
    if(root!=NULL)
    {
        leafNodes(root->left,ans);
        if(root->left==NULL && root->right==NULL)
        {
            ans.push_back(root->data);
        }
        leafNodes(root->right,ans);
    }
}
vector<int> boundary(Node * root)
{
    vector<int> ans;
    vector<int> right;
    leftBoundary(root,ans);
    leafNodes(root,ans);
    rightBoundary(root,right);
    // cout<<flag1<<" "<<flag2<<"\n";
    for(int i=right.size()-1;i>0;i--)
    {
        ans.push_back(right[i]);
    }
    return ans;
}
