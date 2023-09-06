bool search(vector<vector<int>> a, int n, int m, int x)
{
    int col = m - 1;
    int row = 0;
    while (row < n and col >= 0)
    {
        if (a[row][col] == x)
        {
            return true;
        }
        else if (a[row][col] > x)
        {
            col--;
        }
        else
        {
            row++;
        }
    }
    return false;
}
