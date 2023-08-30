int findMissing(int a[], int n)
{
    int d = (a[n - 1] - a[0]) / n;
    int f = 0;
    int l = n - 1;
    int m;
    while (f <= l)
    {
        m = (f + l) / 2;
        if ((a[m] - a[0]) / d == m)
        {
            f = m + 1;
        }
        else if ((a[m] - a[0]) / d != m)
        {
            if (a[m] - d == a[m - 1])
            {
                l = m - 1;
            }
            else
            {
                return a[m] - d;
            }
        }
    }
}
