void inOrder(Node *root)
{
    if (root)
    {
        inOrder(root->left);
        mp[root->data]++;
        inOrder(root->right);
    }
}
void inOrder2(Node *root)
{
    if (root)
    {
        inOrder2(root->left);
        if (mp.count(root->data))
        {
            ans.push_back(root->data);
        }
        inOrder2(root->right);
    }
}
vector<int> findCommon(Node *root1, Node *root2)
{
    inOrder(root1);
    inOrder2(root2);
    return ans;
}
