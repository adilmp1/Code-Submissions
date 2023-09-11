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
bool findPair(int a[], int n, int k)
{
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        int ind1 = binarysearch(a, n, a[i] + k);
        int ind2 = binarysearch(a, n, a[i] - k);
        if (ind1 == i and ind2 == i and k == 0)
            continue;
        if (ind1 != -1 or ind2 != -1)
            return true;
    }
    return false;
}
