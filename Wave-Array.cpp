void swap(vector<int> &a, int b, int c)
{
    int temp = a[b];
    a[b] = a[c];
    a[c] = temp;
}
void convertToWave(int n, vector<int> &a)
{
    for (int i = 0; i < n - 1; i += 2)
    {
        swap(a, i, i + 1);
    }
}
