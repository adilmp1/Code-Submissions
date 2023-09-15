long long int count(long long int n)
{
    int a[3] = {3, 5, 10};
    long long int dp[4][n + 1];
    for (long long int i = 0; i <= n; i++)
    {
        dp[0][i] = 0;
    }
    for (long long int i = 0; i <= 3; i++)
    {
        dp[i][0] = 1;
    }
    for (long long int i = 1; i <= 3; i++)
    {
        for (long long int j = 0; j <= n; j++)
        {
            if (a[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j] + dp[i][j - a[i - 1]];
            }
        }
    }
    return dp[3][n];
}
