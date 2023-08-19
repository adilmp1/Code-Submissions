int counter(Node *root, int *count)
{
    if (root != NULL)
    {
        if (root->left != NULL || root->right != NULL)
        {
            (*count)++;
        }
        counter(root->left, count);
        counter(root->right, count);
    }
}
int countNonLeafNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int count = 0;
    counter(root, &count);
    return count;
}
