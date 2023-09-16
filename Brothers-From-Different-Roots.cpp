int count = 0;
void inOrderStore(Node *root, unordered_map<int, int> &mp)
{
    if (root != NULL)
    {
        inOrderStore(root->left, mp);
        mp[root->data]++;
        inOrderStore(root->right, mp);
    }
}
void inOrder(Node *root, unordered_map<int, int> &mp, int x)
{
    if (root != NULL)
    {
        inOrder(root->left, mp, x);
        if (mp.count(x - root->data))
        {
            count++;
        }
        inOrder(root->right, mp, x);
    }
}
int countPairs(Node *root1, Node *root2, int x)
{
    unordered_map<int, int> mp;
    inOrderStore(root1, mp);
    inOrder(root2, mp, x);
    return count;
}
