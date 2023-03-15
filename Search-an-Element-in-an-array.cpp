int search(int a[], int n, int X)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == X)
        {
            return i;
        }
    }
    return -1;
}
