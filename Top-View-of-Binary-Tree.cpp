vector<int> topView(Node *root)
{
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    map<int, int> mp;
    while (!q.empty())
    {
        auto it = q.front();
        Node *node = it.first;
        int level = it.second;
        q.pop();
        if (mp.find(level) == mp.end())
        {
            mp[level] = node->data;
        }
        if (node->left)
        {
            q.push({node->left, level - 1});
        }
        if (node->right)
        {
            q.push({node->right, level + 1});
        }
    }
    vector<int> ans;
    for (auto pair : mp)
    {
        ans.push_back(pair.second);
    }
    return ans;
}
