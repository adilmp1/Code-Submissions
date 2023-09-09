void inOrder(Node *root, vector<int> &a)
{
    if (root)
    {
        inOrder(root->left, a);
        a.push_back(root->data);
        inOrder(root->right, a);
    }
}
int kthLargest(Node *root, int k)
{
    vector<int> a;
    inOrder(root, a);
    return a[a.size() - k];
}
