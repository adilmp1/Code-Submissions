Node *insert(Node *root, int data)
{
    if (root == NULL)
    {
        return new Node(data);
    }
    else if (root->data == data)
    {
        return root;
    }
    else if (root->data > data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
}
