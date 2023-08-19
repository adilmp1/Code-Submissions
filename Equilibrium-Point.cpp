int equilibriumPoint(long long a[], int n)
{
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    long long tempSum = 0;
    for (int i = 0; i < n; i++)
    {
        tempSum += a[i];
        if (tempSum == (sum - tempSum - a[i + 1]))
        {
            return i + 2;
        }
    }
    return -1;
}
