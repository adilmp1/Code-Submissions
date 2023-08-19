void swap(Node *r, Node *r1, Node *r2)
{
    Node *temp = r1;
    r->left = r2;
    r->right = temp;
}
void mirror(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    swap(root, root->left, root->right);
    mirror(root->left);
    mirror(root->right);
}
