int rowWithMax1s(vector<vector<int>> a, int n, int m)
{
    int col = m - 1;
    int row = 0;
    int ans = -1;
    while (row < n and col >= 0)
    {
        if (a[row][col] == 1)
        {
            col--;
            ans = row;
        }
        else if (a[row][col] == 0)
        {
            row++;
        }
    }
    return ans;
}
