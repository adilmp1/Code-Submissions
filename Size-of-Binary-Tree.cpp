int counter(Node *root, int *count)
{
    if (root != NULL)
    {
        (*count)++;
        counter(root->left, count);
        counter(root->right, count);
    }
}
int getSize(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int count = 0;
    counter(root, &count);
    return count;
}
