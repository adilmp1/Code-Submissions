void booleanMatrix(vector<vector<int>> &a)
{
    unordered_map<int, int> col;
    unordered_map<int, int> row;
    int n = a.size();
    int m = a[0].size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
            {
                if (row.find(i) == row.end())
                {
                    row[i]++;
                }
                if (col.find(j) == col.end())
                {
                    col[j]++;
                }
            }
        }
    }
    for (auto &it : row)
    {
        for (int i = 0; i < m; i++)
        {
            a[it.first][i] = 1;
        }
    }
    for (auto &it : col)
    {
        for (int i = 0; i < n; i++)
        {
            a[i][it.first] = 1;
        }
    }
}
