void swapTranspose(vector<vector<int>> &m, int i, int j)
{
    int temp = m[i][j];
    m[i][j] = m[j][i];
    m[j][i] = temp;
}
void transpose(vector<vector<int>> &m, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swapTranspose(m, i, j);
        }
    }
}

void reverse(vector<vector<int>> &a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            int temp = a[j][i];
            a[j][i] = a[n - j - 1][i];
            a[n - j - 1][i] = temp;
        }
    }
}
void rotate(vector<vector<int>> &a)
{
    int n = a.size();
    transpose(a, n);
    reverse(a, n);
}
