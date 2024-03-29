int perfectSum(int a[], int n, int sum)
{
    int count = 0;
    int mod = 1e9 + 7;
    int dp[n + 1][sum + 1] = {0};
    for (int i = 0; i <= sum; i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (a[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - a[i - 1]]) % mod;
            }
        }
    }
    return dp[n][sum];
}
