int longestSubsequence(int n, int a[])
{
    int temp[n + 1];
    for (int i = 1; i <= n; i++)
    {
        temp[i] = INT_MAX;
    }
    temp[0] = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int idx = upper_bound(temp, temp + n + 1, a[i]) - temp;
        if (temp[idx - 1] < a[i] and temp[idx] > a[i])
        {
            temp[idx] = a[i];
        }
    }
    for (int i = n; i >= 0; i--)
    {
        if (temp[i] != INT_MAX)
        {
            return i;
        }
    }
    return 0;
}
