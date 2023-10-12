int ans = -1;
int floor(Node *root, int x)
{
    if (root)
    {
        if (root->data == x)
        {
            return x;
        }
        else if (root->data < x)
        {
            ans = root->data;
            return floor(root->right, x);
        }
        else
        {
            return floor(root->left, x);
        }
    }
    return (ans <= x) ? ans : -1;
}
