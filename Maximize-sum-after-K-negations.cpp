long long int maximizeSum(long long int a[], int n, int k)
{
    long long int sum = 0;
    sort(a, a + n);
    int ind = 0;
    for (int i = 0; i < n && ind < k; i++)
    {
        if (a[i] < 0)
        {
            a[i] = abs(a[i]);
            ind++;
        }
    }
    sort(a, a + n);
    if ((k - ind) % 2 == 1)
    {
        a[0] = -1 * a[0];
    }
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}
