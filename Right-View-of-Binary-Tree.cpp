void rightViewHelper(Node *root, int level, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }
    if (ans.size() == level)
    {
        ans.push_back(root->data);
    }
    rightViewHelper(root->right, level + 1, ans);
    rightViewHelper(root->left, level + 1, ans);
}
vector<int> rightView(Node *root)
{
    vector<int> ans;
    rightViewHelper(root, 0, ans);
    return ans;
}
