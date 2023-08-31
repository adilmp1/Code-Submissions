int height(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(height(root->left), height(root->right));
}
bool isBalanced(Node *root)
{
    if (root == NULL)
        return true;
    int balance = abs(height(root->left) - height(root->right));
    if (balance > 1)
    {
        return false;
    }
    return (isBalanced(root->left) && isBalanced(root->right));
}
