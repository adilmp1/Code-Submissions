vector<int> findMaxRow(vector<vector<int>> mat, int n)
{
    if (n == 0)
    {
        return {};
    }
    if (n == 1)
    {
        if (mat[0][0] == 1)
        {
            return {0, 1};
        }
        return {};
    }
    int pos = 0, max = 0, row = 0, col = n - 1;
    vector<int> ans;
    while (row < n && col >= 0)
    {
        if (mat[row][col] == 1)
        {
            col--;
            pos = row;
            max++;
        }
        else
        {
            row++;
        }
    }
    ans.push_back(pos);
    ans.push_back(max);
    return ans;
}
