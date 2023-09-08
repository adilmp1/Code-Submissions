void inOrder(Node *root, vector<int> &a)
{
    if (root)
    {
        inOrder(root->left, a);
        a.push_back(root->data);
        inOrder(root->right, a);
    }
}
void inOrderRepalce(Node **root, vector<int> &a)
{
    if ((*root))
    {
        inOrderRepalce(&((*root)->left), a);
        (*root)->data = a[0];
        a.erase(a.begin());
        inOrderRepalce(&((*root)->right), a);
    }
}
Node *binaryTreeToBST(Node *root)
{
    vector<int> elements;
    inOrder(root, elements);
    sort(elements.begin(), elements.end());
    inOrderRepalce(&root, elements);
    return root;
}
