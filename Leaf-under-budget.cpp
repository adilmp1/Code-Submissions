void getCountHelper(Node *root, map<int, int> &mp)
{
    queue<Node *> q;
    q.push(root);
    int level = 1;
    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            Node *node = q.front();
            q.pop();
            if (node->left == NULL and node->right == NULL)
            {
                mp[level]++;
            }
            if (i == size - 1)
                level++;
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
    }
}
int getCount(Node *root, int k)
{
    map<int, int> mp;
    getCountHelper(root, mp);
    int travelled = 0;
    int count = 0;
    for (auto &pair : mp)
    {
        for (int i = 0; i < pair.second; i++)
        {
            travelled += pair.first;
            if (travelled > k)
            {
                return count;
            }
            count++;
        }
    }
    return count;
}
