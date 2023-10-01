vector<int> boundaryTraversal(vector<vector<int>> a, int n, int m)
{
    vector<int> ans;
    int top = 0;
    int left = 0;
    int bottom = n - 1;
    int right = m - 1;
    int count = 0;
    int total = 2 * (m + n - 2);
    for (int i = left; i <= right; i++)
    {
        if (top < n and i < m)
        {
            ans.push_back(a[top][i]);
        }
    }
    if (top == bottom)
        return ans;
    top++;
    for (int i = top; i <= bottom; i++)
    {
        if (i < n and right < m)
        {
            ans.push_back(a[i][right]);
        }
    }
    if (right == left)
        return ans;
    right--;
    for (int i = right; i >= left; i--)
    {
        if (bottom < n and i < m)
        {
            ans.push_back(a[bottom][i]);
        }
    }
    if (top == bottom)
        return ans;
    bottom--;
    for (int i = bottom; i >= top; i--)
    {
        if (i < n and left < m)
        {
            ans.push_back(a[i][left]);
        }
    }
    return ans;
}
