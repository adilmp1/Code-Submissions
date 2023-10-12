unordered_map<int, vector<Node *>> mp;
void makeInMap(Node *root)
{
    if (root)
    {
        makeInMap(root->left);
        mp[root->data].push_back(root);
        makeInMap(root->right);
    }
}
bool isSame(Node *root1, Node *root2)
{
    if (root1 == NULL and root2 == NULL)
    {
        return true;
    }
    else if (root1 == NULL || root2 == NULL)
    {
        return false;
    }
    return (root1->data == root2->data) && isSame(root1->left, root2->left) && isSame(root1->right, root2->right);
}
int dupSub(Node *root)
{
    makeInMap(root);
    for (auto it : mp)
    {
        vector<Node *> temp = it.second;
        if (temp.size() > 1)
        {
            int n = temp.size();
            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    Node *root1 = temp[i];
                    Node *root2 = temp[j];
                    if (root1->left == NULL and root1->right == NULL)
                    {
                        continue;
                    }
                    if (root2->left == NULL and root2->right == NULL)
                    {
                        continue;
                    }
                    if (isSame(root1, root2))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}
