void rearrange(long long *a, int n)
{

    int left = 0;
    int right = n - 1;
    int maxi = a[right] + 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            a[i] += +(a[right] % maxi) * maxi;
            right--;
        }
        else
        {
            a[i] += (a[left] % maxi) * maxi;
            left++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        a[i] /= maxi;
    }
}
