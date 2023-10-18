int ans = INT_MAX;
void helper(Node *root, int k)
{
    if (root == NULL)
    {
        return;
    }
    ans = min(ans, abs(k - root->data));
    helper(root->left, k);
    helper(root->right, k);
}
int minDiff(Node *root, int k)
{
    helper(root, k);
    return ans;
}


//Optimized code
int ans = INT_MAX;
void helper(Node *root, int k)
{
    if (root == NULL)
    {
        return;
    }
    ans = min(ans, abs(k - root->data));
    if (root->data < k)
    {
        helper(root->right, k);
    }
    else
    {
        helper(root->left, k);
    }
}
int minDiff(Node *root, int k)
{
    helper(root, k);
    return ans;
}
