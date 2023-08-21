bool zeroCounter(int i, int j, int n, int m, vector<vector<int>> &a)
{
    int c = 0;
    if (i - 1 >= 0 && j - 1 >= 0 && a[i - 1][j - 1] == 0)
        c++;
    if (i - 1 >= 0 && a[i - 1][j] == 0)
        c++;
    if (i - 1 >= 0 && j + 1 < m && a[i - 1][j + 1] == 0)
        c++;
    if (j - 1 >= 0 && a[i][j - 1] == 0)
        c++;
    if (j + 1 < m && a[i][j + 1] == 0)
        c++;
    if (i + 1 < n && j - 1 >= 0 && a[i + 1][j - 1] == 0)
        c++;
    if (i + 1 < n && a[i + 1][j] == 0)
        c++;
    if (i + 1 < n && j + 1 < m && a[i + 1][j + 1] == 0)
        c++;

    if (c % 2 == 0 && c != 0)
    {
        return true;
    }
    return false;
}
int Count(vector<vector<int>> &a)
{
    int n = a.size();
    int count = 0;
    int m = a[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
            {
                if (zeroCounter(i, j, n, m, a))
                {
                    count++;
                }
            }
        }
    }
    return count;
}
