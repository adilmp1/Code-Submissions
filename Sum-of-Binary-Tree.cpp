int counter(Node *root, long int *sum)
{
    if (root != NULL)
    {
        (*sum) += (long int)root->data;
        counter(root->left, sum);
        counter(root->right, sum);
    }
}
long int sumBT(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    long int sum = 0;
    counter(root, &sum);
    return sum;
}
