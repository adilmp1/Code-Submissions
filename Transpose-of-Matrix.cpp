void swap(vector<vector<int>> &m, int i, int j)
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
            swap(m, i, j);
        }
    }
}
