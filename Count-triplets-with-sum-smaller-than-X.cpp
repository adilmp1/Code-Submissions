long long countTriplets(long long a[], int n, long long sum)
{
    long long count = 0;
    sort(a, a + n);
    for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            long long tempsum = a[i] + a[j] + a[k];
            if (tempsum < sum)
            {
                count += k - j;
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    return count;
}
