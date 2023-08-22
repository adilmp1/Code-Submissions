int findMinOpeartion(vector<vector<int>> a, int n)
{
    int maximum = INT_MIN;
    int rowSums;
    int colSums;
    int row[n];
    for (int i = 0; i < n; i++)
    {
        rowSums = 0;
        colSums = 0;
        for (int j = 0; j < n; j++)
        {
            rowSums += a[i][j];
            colSums += a[j][i];
        }
        row[i] = rowSums;
        maximum = max(maximum, rowSums);
        maximum = max(maximum, colSums);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += maximum - row[i];
    }
    return ans;
}
