vector<int> reverseLevelOrder(Node *root)
{
    queue<Node *> q;
    vector<int> ans;
    q.push(root);
    while (!q.empty())
    {
        vector<int> temp;
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *node = q.front();
            q.pop();
            temp.push_back(node->data);
            if (node->left != NULL)
                q.push(node->left);
            if (node->right != NULL)
                q.push(node->right);
        }
        for (int i = temp.size() - 1; i >= 0; i--)
        {
            ans.push_back(temp[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
