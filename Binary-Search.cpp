int binarysearch(int a[], int n, int k)
{
    int f = 0;
    int l = n - 1;
    int m;
    while (f <= l)
    {
        m = (f + l) / 2;
        if (a[m] == k)
        {
            return m;
        }
        else if (a[m] > k)
        {
            l = m - 1;
        }
        else
        {
            f = m + 1;
        }
    }
    return -1;
}
