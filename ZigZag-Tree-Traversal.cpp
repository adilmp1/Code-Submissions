vector<int> zigZagTraversal(Node *root)
{
    queue<Node *> q;
    int flag = false;
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
        if (flag)
        {
            for (int i = temp.size() - 1; i >= 0; i--)
            {
                ans.push_back(temp[i]);
            }
        }
        else
        {
            for (int i = 0; i < temp.size(); i++)
            {
                ans.push_back(temp[i]);
            }
        }
        flag = !flag;
    }
    return ans;
}
