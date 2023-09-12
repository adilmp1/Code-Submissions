bool check(Node *root)
{
    queue<Node *> q;
    q.push(root);
    int height = -1;
    int currentHeight = 1;
    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            Node *node = q.front();
            q.pop();
            if (node->left == NULL and node->right == NULL)
            {
                if (height == -1)
                {
                    height = currentHeight;
                }
                else if (currentHeight != height)
                {
                    return false;
                }
            }
            if (node->left != NULL)
                q.push(node->left);
            if (node->right != NULL)
                q.push(node->right);
        }
        currentHeight++;
    }
    return true;
}
