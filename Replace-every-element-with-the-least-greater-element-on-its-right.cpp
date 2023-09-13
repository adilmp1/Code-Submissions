struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
Node *insertIntoTree(Node *root, int data)
{
    if (root == NULL)
    {
        Node *newNode = new Node(data);
        return newNode;
    }
    else if (root->data >= data)
    {
        root->left = insertIntoTree(root->left, data);
    }
    else
    {
        root->right = insertIntoTree(root->right, data);
    }
    return root;
}
void inOrder(Node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}
int inOrderSuccessor(Node *root, int data)
{
    Node *succ = NULL;
    while (root != NULL)
    {
        if (root->data <= data)
        {
            root = root->right;
        }
        else
        {
            succ = root;
            root = root->left;
        }
    }
    if (succ == NULL)
        return -1;
    return succ->data;
}
vector<int> findLeastGreater(vector<int> &a, int n)
{
    vector<int> ans;
    Node *root = NULL;
    for (int i = n - 1; i >= 0; i--)
    {
        root = insertIntoTree(root, a[i]);
        ans.push_back(inOrderSuccessor(root, a[i]));
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
