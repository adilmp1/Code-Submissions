void leftViewHelper(Node * root,int level,vector<int>& ans)
{
    if(root==NULL)
    {
        return;
    }
    if(ans.size()==level)
    {
        ans.push_back(root->data);
    }
    leftViewHelper(root->left,level+1,ans);
    leftViewHelper(root->right,level+1,ans);
}

vector<int> leftView(Node * root)
{
    vector<int> ans;
    leftViewHelper(root,0,ans);
    return ans;
}
