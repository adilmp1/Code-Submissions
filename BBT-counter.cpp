long long int countBT(int h)
{
    long long int dp[h + 1];
    dp[0] = 1;
    dp[1] = 1;
    long long int mod = 1e9 + 7;
    for (int i = 2; i <= h; i++)
    {
        dp[i] = ((dp[i - 1] * dp[i - 1]) % mod + (2 * dp[i - 1] * dp[i - 2]) % mod) % mod;
    }
    return dp[h];
}
