vector<int> spirallyTraverse(vector<vector<int>> a, int n, int m)
{
    vector<int> ans;
    int top = 0;
    int left = 0;
    int right = m - 1;
    int bottom = n - 1;
    int maxi = m * n;
    while (top <= bottom and left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            if (ans.size() != maxi)
                ans.push_back(a[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            if (ans.size() != maxi)
                ans.push_back(a[i][right]);
        }
        right--;
        for (int i = right; i >= left; i--)
        {
            if (ans.size() != maxi)
                ans.push_back(a[bottom][i]);
        }
        bottom--;
        for (int i = bottom; i >= top; i--)
        {
            if (ans.size() != maxi)
                ans.push_back(a[i][left]);
        }
        left++;
    }
    return ans;
}
