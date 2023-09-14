bool helper(Node *root1, Node *root2)
{
    if (root1 == NULL and root2 == NULL)
    {
        return true;
    }
    if (root1 == NULL or root2 == NULL)
    {
        return false;
    }
    if (root1->data != root2->data)
    {
        return false;
    }
    return helper(root1->left, root2->right) and helper(root1->right, root2->left);
}
bool isSymmetric(struct Node *root)
{
    if (root == NULL)
        return true;
    return helper(root->left, root->right);
}
