void inOrder(Node *root, vector<int> &temp)
{
    if (root != NULL)
    {
        inOrder(root->left, temp);
        temp.push_back(root->data);
        inOrder(root->right, temp);
    }
}
float findMedian(struct Node *root)
{
    vector<int> temp;
    inOrder(root, temp);
    int n = temp.size();
    if (n % 2 == 1)
    {
        return (float)temp[n / 2];
    }
    n /= 2;
    float ans = (float)(temp[n] + temp[n - 1]) / 2;
    return ans;
}
