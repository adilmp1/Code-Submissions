int findSum(Node *leftNode, Node *rightNode)
{
    if (leftNode == NULL and rightNode == NULL)
        return 0;
    if (leftNode == NULL)
        return rightNode->data + findSum(rightNode->left, rightNode->right);
    if (rightNode == NULL)
        return leftNode->data + findSum(leftNode->left, leftNode->right);
    return leftNode->data + rightNode->data + findSum(leftNode->left, leftNode->right) + findSum(rightNode->left, rightNode->right);
}
bool isSumTree(Node *root)
{
    if (root == NULL)
    {
        return true;
    }
    int sum = findSum(root->left, root->right);
    if (root->data != sum and sum != 0)
        return false;
    return (isSumTree(root->left) and isSumTree(root->right));
}
