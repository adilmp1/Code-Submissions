vector<int> levelOrder(Node *root)
{
    if (root == NULL)
    {
        return {};
    }
    vector<int> ans;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        ans.push_back(node->data);
        if (node->left != NULL)
            q.push(node->left);
        if (node->right != NULL)
            q.push(node->right);
    }
    return ans;
}
