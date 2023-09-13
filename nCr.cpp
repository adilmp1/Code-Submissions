int nCr(int n, int r)
{
    if (r > n)
        return 0;
    if (n - r < r)
        r = n - r;
    int mod = 1e9 + 7;
    if (r == 0)
        return 1;
    if (r == 1)
        return n;
    long long dp[r + 1] = {0};
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = min(i, r); j > 0; j--)
        {
            dp[j] = (dp[j] + dp[j - 1]) % mod;
        }
    }
    return dp[r];
}
