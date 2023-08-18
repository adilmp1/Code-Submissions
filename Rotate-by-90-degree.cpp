void swap(vector<vector<int>> &a, int i, int j)
{
    int temp = a[i][j];
    a[i][j] = a[j][i];
    a[j][i] = temp;
}
void swapWithIndex(vector<vector<int>> &a, int i, int j1, int j2)
{
    int temp = a[j1][i];
    a[j1][i] = a[j2][i];
    a[j2][i] = temp;
}
void transpose(vector<vector<int>> &a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(a, i, j);
        }
    }
}
void rotateby90(vector<vector<int>> &a, int n)
{
    transpose(a, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            swapWithIndex(a, i, j, n - j - 1);
        }
    }
}
