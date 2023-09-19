ll countStrings(int n)
{
    ll dp[n + 1];
    ll mod = 1e9 + 7;
    dp[0] = 1;
    dp[1] = 2;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
    }
    return dp[n];
}
