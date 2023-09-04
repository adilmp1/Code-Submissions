vector<vector<char>> fill(int n, int m, vector<vector<char>> a)
{
    vector<int> v = {1, 0, -1, 0, 1};
    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((!i or !j or i == n - 1 or j == m - 1) and a[i][j] == 'O')
            {
                q.push({i, j});
            }
        }
    }
    while (!q.empty())
    {
        auto b = q.front();
        q.pop();
        a[b.first][b.second] = '#';
        for (int i = 0; i < 4; i++)
        {
            int x = b.first + v[i];
            int y = b.second + v[i + 1];
            if (x < 0 or y < 0 or x == n or y == m or a[x][y] == 'X' or a[x][y] == '#')
                continue;
            q.push({x, y});
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 'O')
                a[i][j] = 'X';
            if (a[i][j] == '#')
                a[i][j] = 'O';
        }
    }
    return a;
}
